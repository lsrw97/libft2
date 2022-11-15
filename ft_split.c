/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:04:00 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/15 13:50:50 by eelisaro         ###   ########.fr       */
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

int	totalstrings(char *s, char c)
{
	int	i;
	int	total;
	int	x;

	total = 1;
	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			x = 1;
		else if (s[i] == c && x != 0)
		{
			total++;
			x = 0;
		}
		i++;
	}
	return (total);
}

void	allocmemory(char **strings, char *s, char c)
{
	int	cs;
	int	ce;

	strings = malloc(sizeof(char *) * (totalstrings(s, c) + 1));
	if (strings)
		return (NULL);
	ce = -1;
	cs = 0;
	while (s[++ce])
	{
		if (ce != 0 && s[ce - 1] == s[ce])
			continue ;
		else if (s[ce] == c)
		{
			*strings = malloc(ce - cs + 1);
			cs = ce;
			strings++;
		}
	}
	if (ce == 0 && s[ce - 1] != c)
	{
		*strings = malloc(ce - cs + 1);
		strings++;
	}
	*strings = malloc(sizeof(NULL));
}

char	**ft_split(char const *s, char c)
{
	
}
