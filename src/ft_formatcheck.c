/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:13:47 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/29 15:22:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_formatcheck(va_list input, char c)
{
	size_t nb_put;

	nb_put = 0;
	if (c == 'd' || c == 'i')
		nb_put = ft_putnbrprintf_fd((va_arg(input, int)), 1);
	if (c == 'c')
		ft_putchar_fd((va_arg(input, int)), 1);
	if (c == 's')
		nb_put = ft_putstrprintf_fd(va_arg(input, char *), 1);
	if (c == 'u')
		nb_put = ft_putnbrprintf_unsigned_fd((va_arg(input, unsigned int)), 1);
	if (c == 'x')
		nb_put = ft_print_hex(0,(va_arg(input, size_t)), "0123456789abcdef");
	if (c == 'X')
		nb_put = ft_print_hex(0,(va_arg(input, size_t)), "0123456789ABCDEF");
	if (c == 'p')
		nb_put = ft_print_hex(2,(va_arg(input, size_t)), "0123456789abcdef");
	if (c == '%')
		ft_putchar_fd('%', 1);
	if (c == 'c' || c == '%')
		nb_put++;
	return (nb_put);
}
