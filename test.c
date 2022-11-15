/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:47:12 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/15 15:12:49 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>
#include "libft.h"
#include "ft_strlcat.c"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"
#include <stddef.h>
#include <stdint.h>

int	main(void)
{

   char dest[30];
   memset(dest, 'B', 4);
	char * src = (char *)"AAAAAAAAA";
	printf("%ld\n", ft_strlcat(dest, src, 3));
   printf("%ld, %ld, %ld\n", 3 + strlen(src), ft_strlen(dest), ft_strlen(src));
}
