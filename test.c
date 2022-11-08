/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:47:12 by eelisaro          #+#    #+#             */
/*   Updated: 2022/11/08 16:44:27 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>
#include "libft.h"
#include "ft_strjoin.c"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int	main(void)
{
   char dst[11] = "adasd";
   char dst2[11] = "adasd";


   char *str = ft_strjoin(dst,dst2);
   printf("%s", str);


}
