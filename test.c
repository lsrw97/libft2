/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:47:12 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/12 20:45:53 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>
#include "libft.h"
#include "ft_strtrim.c"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

char	func(unsigned int x, char c)
{
   printf("%c", c);
   return (c + x - x);
}

int	main(void)
{
   char	s1[] = "12345";

   printf("\n%s", ft_strtrim(s1, "15"));
}
