/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 07:45:04 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/27 18:00:51 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *str, ...)
{
	va_list input;
	size_t	print_size;
	size_t	i;
	
	i = 0;
	print_size = 0;
	va_start(input, str);

	while (str[i])
	{
		if (str[i] == '%')
		{

			ft_putchar(va_arg(input,int)+'0');

			//print_size += ft_formatcheck();
			i++;
		}
		
		ft_putchar(str[i]);
		i++;
	}
	va_end(input);
	return (print_size);

}
