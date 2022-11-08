/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:50:07 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 15:56:10 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include <stdio.h>
#include<stdlib.h>

// char	recursive(int *i, int num, char *c)
// {
// 	if (num <= 9)
// 		recursive(i[0], num/10, c);
// 	i[0]++;

// }


int	intlen(int n)
{
	int	i;
	int	neg;

	i = 0;
	if (n < 0)
		neg = 1;
	else
		neg = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		if (n == 0)
		{
			i++;
			return (i);
		}
		n /= 10;
		i++;
	}
	return (i + neg);
}


char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	len = intlen(n);
	str = malloc(len + 1);
	if (len == 0 || !str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[len] = '\0';
	while (n != 0)
	{
		i = n % 10;
		str[len-- - 1] = i + 48;
		n /= 10;
	}
	return (str);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(n);
	while (str[0] != '\0')
	{
		write(fd, str, 1);
		i++;
		str++;
	}
	str -= i;
}
