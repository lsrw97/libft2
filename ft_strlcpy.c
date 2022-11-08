/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:10:42 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 20:10:41 by eelisaro         ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size <= 0 || ft_strlen(dst) < 1)
		return (0);

	while (i < (int)size)
	{
		// printf("%zu, %s, %s", size, dst, src);
		dst[i] = src[i];
		i++;
	}
	dst[size] = '\0';
	printf("%s, %s: src\n", dst, src);
	return (ft_strlen(dst));
}
