/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrprintf_unsigned_fd.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:46:15 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/28 18:27:11 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


int	ft_putnbrprintf_unsigned_fd(unsigned int nb, int fd)
{
	if (nb > 9)
	{  
		ft_putnbrprintf_unsigned_fd(nb /10, fd);
	}
	if (nb == 0)
		return (1);
	ft_putchar_fd(((nb % 10) + '0'), fd);

	return (ft_len_of_nbr(nb));
}
