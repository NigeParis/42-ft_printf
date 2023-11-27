/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:13:47 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/27 18:22:34 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_formatcheck(char *str, va_list input)
{
	size_t count;

	count = 0;
	
	putchar(va_arg(input, int) + '0');

	return (count);
}
