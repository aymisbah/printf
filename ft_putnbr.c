/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:07:58 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/05 20:27:42 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
// static void ft_putchar_b(char c)
// {
//     write(1, &c, 1);
// }

int ft_putnbr(int n)
{
    long nb = n;
    int i = 0;
    int res; // To hold recursive call results

    if (nb < 0)
    {
        if (ft_putchar('-') == -1)
            return (-1); // Propagate error if ft_putchar fails
        i++;
        nb = -nb;
    }
    if (nb > 9)
    {
        res = ft_putnbr(nb / 10); // Recursive call
        if (res == -1) // Propagate error if recursion fails
            return (-1);
        i += res;
    }
    if (ft_putchar((nb % 10) + '0') == -1)
        return (-1); // Handle ft_putchar failure
    i++;
    return i; // Return the total number of characters written
}