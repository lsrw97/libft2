/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:47:12 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/13 19:15:55 by eelisaro         ###   ########.fr       */
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

int	main(void)
{
   char	s1[] = "1221135769";
   // char set[] = "19236";
   char **s = ft_split(s1, '2');

   int i = -1;
   while (s[++i])
      printf("%s\n", s[i]);
}
