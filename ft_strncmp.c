/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:21:09 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 20:13:59 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] > s2[i] || s2[i] == '\0')
		{
			return (1);
		}
		if (s1[i] < s2[i] || s1[i] == '\0')
			return (-1);
		i++;
	}
	return (0);
}
