/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:47:12 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/08 20:21:48 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>
#include "libft.h"
#include "ft_strchr.c"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int	main(void)
{
   char dst[11] = "adatsd";

   printf("%s\n", strchr(dst, 't' + 256));
   printf("%s", ft_strchr(dst, 't' + 256));
}
