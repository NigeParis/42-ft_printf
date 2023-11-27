/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:13:47 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/27 18:45:37 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_formatcheck(va_list input)
{
	int count;

	count = 0;
	
	ft_putchar((va_arg(input, int)) + '0');

	return (count);
}
