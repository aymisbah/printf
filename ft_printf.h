/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:33:03 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/05 18:00:36 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_putchar(int c);
int	ft_putstr(char *s);
// int count(int nb);
int ft_putnbr(int n);
int	ft_printp(unsigned long nbr);
// int count_p(unsigned long n);
// int count_u(unsigned int nb);
int	ft_putun(unsigned int n);
// int count_hexa(unsigned long long nb,int type);
int ft_hexa(unsigned long long n,int type);
int ft_printf(const char *format, ...);

#endif