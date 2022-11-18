/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:42:41 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/16 16:18:22 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>
#include <stdint.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (ft_strlen(s) < start)
	{
		substr = malloc(sizeof(char) * 1);
		if (!substr || start == 0)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	substr = malloc(ft_strlen(s) - start + 1);
	if (!substr)
		return (NULL);
	while (s[++i])
		if (i < len)
			substr[i] = s[start + i];
	substr[i] = '\0';
	printf("%s", substr);
	return (substr);
}




// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	unsigned int	i;
// 	unsigned int	s_len;
// 	char			*substr;

// 	if (!s)
// 		return (NULL);
// 	s_len = ft_strlen(s);
// 	if (s_len < start)
// 	{
// 		if (!(substr = malloc(sizeof(char) * 1)))
// 			return (NULL);
// 		substr[0] = '\0';
// 		return (substr);
// 	}
// 	if (!(substr = malloc(sizeof(char) * (len + 1))))
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		substr[i] = s[start + i];
// 		i++;
// 	}
// 	substr[i] = '\0';
// 	return (substr);
// }


