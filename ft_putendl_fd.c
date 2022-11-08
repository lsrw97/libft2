/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:39:19 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 15:56:54 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

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
	write(fd, "\n", 1);
}
