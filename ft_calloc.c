/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:40:57 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/08 20:58:18 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	x;

	x = (size_t)nmemb * (size_t)size;
	i = 0;
	if (x >= 2147483647)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i != nmemb * size)
		*((char *)ptr + i++) = '\0';
	return (ptr);
}
