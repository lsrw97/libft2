/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:02:27 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 15:33:09 by eelisaro         ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*string;

	string = malloc(ft_strlen(s1) + 1);
	ft_strcpy (string, (char *)s1);
	i = 0;
	while (set[i] != '\0')
	{
		if (string[0] == set[i])
		{
			string = string + 1;
			i = ft_strlen(set);
		}
		i++;
	}
	i = 0;
	while (string[0] != set[i] && set[i] != '\0')
	{
		if (string[ft_strlen(string) - 1] == set[i])
		string[ft_strlen(string) - 1] = '\0';
		i++;
		return (string);
	}
