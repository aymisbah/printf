/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:26:19 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/03 22:13:09 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexa(unsigned long long n,int type, int *i)
{
   char *base;
   if (type == 0)
      base = "0123456789ABCDEF";
   if (type == 1)
      base = "0123456789abcdef";
   if (n >= 16)
   {
      ft_hexa(n / 16,type, i);
   }
   *i +=ft_putchar(base[n % 16]);
   printf(">>>>>>>>>>>>>>%d", *i);
   return *i;
}

// int count_hexa(unsigned long long nb,int type)
// {
//    unsigned long long n;
//    // int i = 0;
//    printf("|--<<%d<<--|\n",nb);
// 	ft_hexa(nb,type, i);
//    n = nb;
//    printf("|--<<%d|\n",n);
// 	while (n)
// 	{
//       printf("|-->%d|\n",n);
// 		n = n / 10;
// 		i++;
// 	}
   
//    printf("|%d|\n",i);
// 	return(i);
// }