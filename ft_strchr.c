/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:20:23 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/12 17:16:37 by eelisaro         ###   ########.fr       */
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
