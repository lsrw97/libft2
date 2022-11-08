/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:36:51 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 15:56:32 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int		i;
	char	c;

	i = 0;
	if (fd >= 0)
	{
		while (s[0] != '\0')
		{
			write(fd, s, 1);
			s++;
			i++;
		}
		str -= i;
	}
}
