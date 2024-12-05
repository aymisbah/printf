/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:26:19 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/05 20:23:46 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// char ft_putchar_c(char c)
// {
// 	write (1, &c, 1);
// 	return (1);
// }
int ft_hexa(unsigned long long n,int type)
{
   int i = 0;
   char *base;
   if (type == 0)
      base = "0123456789ABCDEF";
   if (type == 1)
      base = "0123456789abcdef";
   if (n >= 16)
   {
      i += ft_hexa(n / 16,type);
   }
   if (ft_putchar(base[n % 16] == -1))
      return (-1);
   i++;
   return (i);
}

// int count_hexa(unsigned long long nb,int type)
// {
//    unsigned long long n = 0;
//    int i;
// 	n += ft_hexa(nb,type);
//    printf("-->%d\n",n);
// 	return(n);
// }
