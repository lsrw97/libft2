/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:08:48 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 17:40:46 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	while (i != n)
	{
		if (*(unsigned char *)(s + i) < 0)
		{
			i++;
			continue ;
		}
		if (*(unsigned char *)(s + i) == c)
		{
			p = (unsigned char *)(s + i);
			return (p);
		}
		i++;
	}
	return (NULL);
}
