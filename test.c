/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:47:12 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/06 20:21:28 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>
#include "libft.h"
#include "ft_strrchr.c"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int	main(void)
{
	//  char dest[7] = "5";
   const char src[12]  = "hello world";

   printf("%s",ft_strrchr(src, 'h'));


   return(0);
}

