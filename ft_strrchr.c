/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:06:54 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/12 16:39:14 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strrchr(const char *s, int c)
// {
// 	int		i;
// 	char	*p;

// 	i = ft_strlen(s) - 1;
// 	if (i < 0)
// 		return ((char *)(s));
// 	if (c == '\0')
// 		return ((char *)s + ft_strlen(s));
// 	while (i != -1)
// 	{
// 		if ((unsigned char)s[i] == (unsigned char)c)
// 		{
// 			p = (char *)s + i;
// 			return (p);
// 		}
// 		i--;
// 	}
// 	return (NULL);
// }

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occurence;

	if (s[0] == 0 && c == 0)
		return ((char *)&s[0]);
	else if (s[0] == 0)
		return (NULL);
	i = 0;
	last_occurence = NULL;
	if (s != NULL)
	{
		if (s[i] == 0)
			return (last_occurence = (char *)&s[i]);
		while (s[i])
		{
			if (s[i] == (char)c)
				last_occurence = (char *)&s[i];
			i++;
		}
		if (c == 0)
			return (last_occurence = (char *)&s[i]);
	}
	return (last_occurence);
}
