/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:37:23 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/05 20:22:40 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// static void ft_putchar_b(char c)
// {
//     write(1, &c, 1);
// }
int	ft_putun(unsigned int n)
{
	int	i;
	i = 0;
	if (n > 9)
		i += ft_putun(n / 10);
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	i++;
	return(i);
}
// int count_u(unsigned int nb)
// {
// 	unsigned int n;
// 	int i;


// 	i = 0;
// 	ft_putun(nb);
// 	n = nb;
// 	while (n > 9)
// 	{
// 		n = n / 10;
// 		i++;
// 	}
// 	if (n < 9)
// 		i++;
// 	// printf("|--%d--|\n",i);
// 	return(i);
// }