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
	return (total);
}

char	*makeword(char *str, int start, int end)
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

// void makeword(char *str, char *new, int start, int end) {
// 	int i = end - start;
// 	while(i){
// 		new[i] = str[i];
// 		i--;
// 	}
// }


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


char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	**str;
	int total_strings;

	total_strings = totalstrings((char *)s, c);
	if (!total_strings)
		return (NULL);
	str = malloc((sizeof(char *) * (total_strings + 1)));
	if (!str)
		return (NULL);
	i = 0;
	start = 0;
	end = 0;
	printf(" totalstr is %d\n", total_strings);
	while (i <= (size_t)(total_strings - 1))
	{
		if (s[end] && s[end] == c)
			{
				end++;
				start = end;
				continue ;
			}
		while (s[end] && s[end] != c)
		{
			end++;
		}
		// printf("\nstart: str[%ld] = %c\n", start, s[start]);
		// printf("end: str[%ld] = %c\n", end, s[end]);
		// str[i] = malloc(((end - start) * sizeof(char)) + 1);

		// ft_strlcpy(str[i], makeword((char *)s, start, end), end - start + 1);
		str[i] = makeword((char *)s, start, end);

		if (!str[i])
			return(NULL);
		// printf("%s\n", str[i]);
		// start = ++end;
		i++;
	}
	str[i] = NULL;
	return (str);
}
