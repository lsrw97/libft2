/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:42:41 by eelisaro          #+#    #+#             */
/*   Updated: 2022/10/29 21:41:40 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"stdio.h>
#include "libft.h"stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (i != len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
