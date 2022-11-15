/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:10:52 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/15 16:13:54 by eelisaro         ###   ########.fr       */
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
	size_t	i;
	size_t	result;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	result = 0;
	i = 0;
	if (size > dstlen)
		result = ft_strlen(src) + dstlen;
	else
		result = ft_strlen(src) + size;
	while (src[i] && (dstlen + 1) < size)
		dst[dstlen++] = src[i++];
	dst[dstlen] = '\0';
	return (result);
}
