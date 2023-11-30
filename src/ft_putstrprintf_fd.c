/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrprintf_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:05:27 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/30 09:32:08 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrprintf_fd(char *s, int fd)
{
	int count;

	count = 0;
	if ((!s) || (fd < 0))
	{
		ft_putstr("(null)");
		return (6);
	}
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
		count ++;
	}
	return(count);
}
