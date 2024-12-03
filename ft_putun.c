/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:37:23 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/03 18:44:25 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static void	ft_putun(unsigned int n)
{

	if (n > 9)
	{
		ft_putun(n / 10);
		ft_putun(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}
int count_u(unsigned int nb)
{
	unsigned int n;
	int i;


	i = 0;
	ft_putun(nb);
	n = nb;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	if (n < 9)
		i++;
	// printf("|--%d--|\n",i);
	return(i);
}