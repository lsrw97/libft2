/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:04:00 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/16 21:16:27 by eelisaro         ###   ########.fr       */
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

int totalstrings(char * s, char c) {
	int i;
	int total ;
	int	x;

	i = 0;
	total = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (x != 1)
				total++;
			i++;
			x = 1;
		}
		else
		{
			i++;
			x = 0;
		}
	}
	if (total == 0)
		return (1);
	return (total);
}

char	*makeword(char *str, int start, int end, char c)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc((end - start) + 1);
	if (!s)
		return (NULL);
	while (start < end)
		s[i++] = str[start++];
	s[i] = '\0';
	return (s);
}

int	is_valid(char *s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] != c)
			return (1);
	return (0);
}



char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	**str;

	if (totalstrings((char *)s, c) == 1 && (ft_strlen((char *)s) == 0 || !is_valid((char *)s, c)))
	{
		str = malloc (sizeof(char *) * 1);
		str[0] = NULL;
		return str;
	}
	str = malloc((sizeof(char *) * (totalstrings((char *)s, c) + 1)));
	if (!str)
		return (NULL);
	i = 0;
	start = 0;
	end = 0;
	while (i <= (size_t)(totalstrings((char *)s, c) - 1))
	{
		if (s[end] && s[end] == c)
			{
				end++;
				start = end;
				continue ;
			}
		while (s[end] && s[end] != c)
			end++;
		str[i] = makeword((char *)s, start, end, c);
		if (!str[i])
			return (NULL);
		i++;
	}
	str[i] = NULL;
	return (str);
}
