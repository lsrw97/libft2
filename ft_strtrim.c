/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:02:27 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/12 20:46:15 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

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
char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (i != ft_strlen(s))
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}


void	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
		s1[i] = '\0';
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	i;
// 	char	*string;

// 	string = malloc(ft_strlen(s1) + 1);
// 	if (!string)
// 		return (NULL);
// 	ft_strcpy (string, (char *)s1);
// 	i = -1;
// 	while (set[++i])
// 	{
// 		if (string[0] == set[i])
// 		{
// 			string = string + 1;
// 			break ;
// 		}
// 	}
// 	i = -1;
// 	while (set[++i])
// 	{
// 		if (string[ft_strlen(string) - 1] == set[i])
// 			{
// 				string[ft_strlen(string) - 1] = '\0';
// 				return (string);
// 			}
// 	}
// 	return (string);
// }

int	haschar(char *s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;

	string = malloc(ft_strlen((char *)s1) + 1);
	if (!string)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	ft_strcpy(string, (char *)s1);
	if (haschar((char *)set, string[0]))
		string += 1;
	if (haschar((char *)set, string[ft_strlen(string) - 1]))
		string[ft_strlen(string) - 1] = '\0';
	return (string);
}
