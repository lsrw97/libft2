/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:45:42 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 18:29:12 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (i <= len && big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			while ((little[j] == big[i] || little[j] == '\0') && i <= len)
			{
				if (little[j] == '\0')
					return ((char *)(big + i - j));
				i++;
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
