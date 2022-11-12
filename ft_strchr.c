/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:20:23 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/08 21:03:07 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	while ((unsigned char)s[i] != (unsigned char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	p = (char *)s + i;
	return (p);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s != '\0')
// 	{
// 		if ((unsigned char)*s == (unsigned char)c)
// 			return ((char *)s);
// 		s++;
// 	}
// 	if (c == 0)
// 		return ((char *)s);
// 	return (NULL);
// }
