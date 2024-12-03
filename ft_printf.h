/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:33:03 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/03 22:12:51 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_printf(const char *format, ...);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int count(int nb);
int count_p(unsigned long n);
int count_u(unsigned int nb);
// int count_hexa(unsigned long long nb,int type);
int ft_hexa(unsigned long long n,int type, int *i);

#endif