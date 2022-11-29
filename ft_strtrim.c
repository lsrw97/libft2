/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:22:03 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/13 17:20:59 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	is_in_set(char *set, char c)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i != size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}


char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*s;
	char	*s2;
	int		j;

	j = 0;
	s = malloc(ft_strlen(s1) + 1);
	i = 0;
	if (!s1 && !set && !s)
		return (NULL);
	ft_strlcpy(s, s1, ft_strlen(s1) + 1);
	while (s[i] && is_in_set((char *)set, s1[i++]) && ++j)
		s += 1;
	i = ft_strlen(s) - 1;
	if (i)
		while (i >= 0 && is_in_set((char *)set, s[i]))
			s[i--] = '\0';
	s2 = malloc(ft_strlen(s) + 1);
	ft_strlcpy(s2, s, ft_strlen(s) + 1);
	printf("%d", j);
	free (s - j);
	return ((char *)s2);
}
