/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:13:47 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/27 21:40:03 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_formatcheck(va_list input, char c)
{
	int count;

	count = 0;

	if (c == 'd')
		ft_putchar((va_arg(input, int)) + '0');
	if (c == 'c')
		ft_putchar_fd((va_arg(input, int)), 1);
	if (c == 's')
		ft_putstr_fd((va_arg(input, char *)), 1);


	return (count);
}
