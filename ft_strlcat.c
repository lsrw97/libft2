/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:10:52 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/08 15:58:40 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	int		dstlen;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	dstlen = ft_strlen(dst);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (ft_strlen(src) + dstlen);
}
