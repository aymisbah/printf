/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:50:20 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/05 18:12:58 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check(const char c, va_list args)
{
   int i;
   
   i  = 0;
   if (c == 'c')
      i = ft_putchar((int)va_arg(args, int));
   else if (c == 37)
      i = ft_putchar(37);
   else if (c == 's')
      i = ft_putstr(va_arg(args, char *));
   else if (c == 'd' || c == 'i')
      i = ft_putnbr(va_arg(args, int));
   else if (c == 'p')
   {
      i = ft_putstr("0x");
      i += ft_printp(va_arg(args,unsigned long long));
   }
   else if (c == 'u')
      i = ft_putun(va_arg(args,unsigned int));
   else if (c == 'x')
      i = ft_hexa(va_arg(args,unsigned int),1);
   else if (c == 'X')
      i = ft_hexa(va_arg(args,unsigned int),0);
   return(i);
}

int ft_printf(const char *format, ...)
{
   va_list args;
   // int i;
   int r = 0;
   // int j = 0;
   
   va_start(args, format);

   while (*format)
   {
      if (*format != 37)
         r += ft_putchar(*format);
      else if (*format == 37 && *(format + 1))
      { 
         format++;
         r += check(*format, args);
      }
      format++;
   }
   va_end(args);
   return(r);
}
// int main()
// {
//    char *str = "ayamne";
//    int e = printf("%p",str);
//    printf("|%d|",e);
//    printf("\n");
//    int b = ft_printf("%p",str);
//    ft_printf("|%d|",b);
//    // ft_printf("");
// }