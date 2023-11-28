/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrprintf_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:04:04 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/28 18:08:50 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbrprintf_fd(int n, int fd)
{
	int count;
	int neg;

	neg = 0;
	count = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		neg = 1;
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbrprintf_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
	count = ft_len_of_nbr(n);
	return (count + neg);
}
