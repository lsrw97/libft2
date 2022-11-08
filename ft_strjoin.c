/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:33:17 by eelisaro          #+#    #+#             */
/*   Updated: 2022/10/29 21:49:52 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
	char	*nstr;
	int		i;
	int		j;

	j = 0;
	i = 0;
	nstr = malloc(ft_strlen(s1) + ft_strlen(s2) - 1);
	if (nstr == NULL)
		return (NULL);
	while (j != ft_strlen(s1))
	{
		nstr[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (j != ft_strlen(s2))
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}
