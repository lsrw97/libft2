/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:33:17 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/12 19:50:41 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;
	int		j;

	if (s1 && s2)
	{
		str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!str)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		j = -1;
		while (s2[++j])
			str[i++] = s2[j];
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
