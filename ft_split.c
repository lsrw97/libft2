/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:04:00 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/08 19:39:59 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	totalstrings(char *s, char c)
{
	int	i;
	int	total;

	total = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
	total++;
	i++;
	}
	return (total + 1);
}

char	**allmem(char **str, char *s, char c)
{
	int	i;
	int	j;
	int	b;

	i = 0;
	j = 0;
	b = -1;
	if (s[0] == '\0')
		return (NULL);
	str = malloc(totalstrings((char *)s, c) * sizeof(char *));
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str[j++] = malloc(sizeof (char) * (i - b));
			b = i;
		}
		i++;
		if (s[i] == '\0')
			str[j] = malloc(sizeof (char) * (i - b));
	}
	str[++j] = malloc(sizeof (char));
	str[j] = NULL;
	return (str);
}

void	fillstrings(char *s, char c, char **strings)
{
	int		i;
	int		j;
	int		x;


	strings = allmem(strings, (char *)s, c);
	i = 0;
	j = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			strings[j++][x] = '\0';
			i++;
			x = 0;
		}
		else
		{
			strings[j][x++] = s[i++];
		}
	}
	strings[j][x] = '\0';
	if (s[0] == '\0')
		strings = NULL;
}

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

char	**ft_split(char const *s, char c)
{
	char	**str;

	// if (s[0] == '\0' || ft_strlen(s) == 0)
	// 	return (NULL);
	// else
	str = malloc(1);
	fillstrings((char *)s, c, str);
	return (str);
}
