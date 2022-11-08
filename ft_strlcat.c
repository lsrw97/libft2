/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:10:52 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 18:30:37 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (i != size || dst[i] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i == size)
		dst[i] = '\0';
	else
		dst[size] = '\0';
	return (i - 1);
}
