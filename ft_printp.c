/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:13:57 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/03 18:11:08 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	ft_printp(unsigned long nbr)
{

   char  *base;
   base = "0123456789abcdef";
   if (nbr >= 16)
   {
      ft_printp(nbr / 16);
   }
   ft_putchar(base[nbr % 16]);
}
int count_p(unsigned long nb)
{
   
   int i = 2;
   int n;
   ft_putstr("0x");
	ft_printp(nb);
	n = nb;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	if (n < 9)
		i++;
	return(i);
}