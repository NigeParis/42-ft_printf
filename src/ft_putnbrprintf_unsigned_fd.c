/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrprintf_unsigned_fd.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:46:15 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/30 09:45:49 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_putnbrprintf_unsigned_fd(unsigned int nb, int fd)
{
	if (nb > 9)
	{  
		ft_putnbrprintf_unsigned_fd(nb /10, fd);
	}
	if (nb == 0)
	{	
		ft_putnbr_fd(0, 1);
		return (1);
	}
	ft_putchar_fd(((nb % 10) + '0'), fd);

	return (ft_len_of_nbr(nb));
}
