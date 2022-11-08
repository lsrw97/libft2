/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:40:57 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 16:53:50 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i != nmemb * size)
	{
		*((char *)ptr + i) = '\0';
		i++;
	}
	return (ptr);
}
