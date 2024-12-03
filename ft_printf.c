/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:50:20 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/03 22:17:34 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_printf(const char *format, ...)
{
   va_list args;
   int i;
   int r = 0;
   int j = 0;
   

   va_start(args,format);
   i = 0;
   while (format[i])
   {
      if (format[i] != '%')
      {
         r += write(1,&format[i],1);
         i++;
      }
      else if (format[i] == '%' && format[i + 1] == 'X')
      {  
         i++;
         r += ft_hexa(va_arg(args,unsigned int),0 , &j);
         j = 0;
         printf("-------------%d", j);
         i++;
      }
   }
   va_end(args);
   return(r);
}
int main()
{
   char *str = "aymane";
   char *str2 = "misbah";
   // int i = ft_printf("name : |%p| wwname |%p|\n",str,str);
   int e = ft_printf("name : |%X| wwname |%X|",779845,775);
   printf("\n%d",e);
   // printf("\n%d\n",i);
}