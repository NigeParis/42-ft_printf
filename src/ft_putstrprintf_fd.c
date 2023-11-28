/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrprintf_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:05:27 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/28 17:48:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstrprintf_fd(char *s, int fd)
{
	int count;

	count = 0;
	if ((!s) || (fd < 0))
		return (-1);
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
		count ++;
	}
	return(count);
}
