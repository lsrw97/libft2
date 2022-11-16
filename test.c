/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:47:12 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/16 21:23:08 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>
#include "libft.h"
#include "ft_split.c"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"
#include <stddef.h>
#include <stdint.h>
#include <malloc.h>

int	main(void)
{
   // char *s = "oooaooobbooooooocccooooooddddoooooooooooooo";
   // char *s = "  42 tripouille   ";
	// char c = ' ';
   int i = 0;

   // char  **string;
   // string = ft_split(s, c);

   char **tab = ft_split("  42 tripouille   ", ' ');
   while (tab[i])
   {
      printf("maloc for tab[%d] is = %ld\n", i, malloc_usable_size(tab[i]));
      printf("%s\n", tab[i++]);
   }
      // printf("%s\n", string[i]);

}
