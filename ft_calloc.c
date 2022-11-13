/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:40:57 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/13 18:13:14 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>
#include <stdint.h>

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
