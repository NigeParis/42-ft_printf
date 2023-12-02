/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:13:47 by nrobinso          #+#    #+#             */
/*   Updated: 2023/12/02 14:21:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_formatcheck(va_list input, char c)
{
	size_t nb_put;

	nb_put = 0;
	if (c == 'd' || c == 'i')
		nb_put = ft_printf_nbr((va_arg(input, int)));
	if (c == 'c')
		nb_put = ft_printf_char((va_arg(input, int)));
	if (c == 's')
		nb_put = ft_printf_str(va_arg(input, char *));
	if (c == 'u')
		nb_put = ft_printf_unsigned_nbr((va_arg(input, unsigned int)));
	if (c == 'x')
		nb_put = ft_printf_hex(0,(va_arg(input, int)), "0123456789abcdef");
	if (c == 'X')
		nb_put = ft_printf_hex(0,(va_arg(input, int)), "0123456789ABCDEF");
	if (c == 'p')
		nb_put = ft_printf_ptr(2,(va_arg(input, size_t)), "0123456789abcdef");
	if (c == '%')
		nb_put = ft_printf_char('%');
	return (nb_put);
}
