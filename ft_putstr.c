/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:33:15 by aymisbah          #+#    #+#             */
/*   Updated: 2024/12/03 17:59:55 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int count;

	count = 0;
	i = 0;
	if (!s)
		return (count);
	while (s[i])
		write(1, &s[i++], 1);
	count = i;
	return(count);
}
