/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:42:41 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/15 18:44:01 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>



// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*substr;
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	substr = malloc(len + 1);
// 	if (!substr)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		if (i >= (size_t)start && j < len)
// 			substr[j++] = s[i];
// 		i++;
// 	}
// 	substr[j] = '\0';
// 	printf("%s", substr);
// 	return (substr);
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	void					*ptr;
	size_t					i;
	unsigned long long int	x;

	x = (unsigned long long int)nmemb * (unsigned long long int)size;
	printf("%lld", x);
	i = 0;
	if (nmemb >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nmemb * size))
		*((char *)ptr + i++) = '\0';
	return (ptr);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > len)
	{
		if ((temp = malloc(1)) == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	if ((temp = ft_calloc((len + 1), sizeof(char))) == NULL)
		return (NULL);
	while (start < (unsigned int)len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	return (temp);
}

