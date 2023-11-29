/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:13:47 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/29 14:17:07 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_formatcheck(va_list input, char c)
{
	size_t nb_printed;

	nb_printed = 0;

	if (c == 'd' || c == 'i')
	{
		nb_printed = ft_putnbrprintf_fd((va_arg(input, int)), 1);
	}
	if (c == 'c')
	{
		ft_putchar_fd((va_arg(input, int)), 1);
		nb_printed++;
	}
	if (c == 's')
	{
		nb_printed = ft_putstrprintf_fd(va_arg(input, char *), 1);


	}
	if (c == 'u')
		nb_printed = ft_putnbrprintf_unsigned_fd((va_arg(input, unsigned int)), 1);
	if (c == 'x')
		nb_printed = ft_print_hex((va_arg(input, size_t)), "0123456789abcdef");
	if (c == 'X')
		nb_printed = ft_print_hex((va_arg(input, size_t)), "0123456789ABCDEF");

	if (c == 'p')
		{
			ft_putstr_fd("0x", 1);
			nb_printed = ft_print_hex((va_arg(input, size_t)), "0123456789abcdef");
			nb_printed += 2;
		}
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		nb_printed++;
	}
	return ((int)nb_printed);
}
