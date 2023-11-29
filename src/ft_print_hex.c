/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:15:33 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/29 14:11:24 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

static int	ft_putnbr_long_base(size_t nbr, char *base);
static int	ft_check_base(char *base);
static size_t	ft_baselen(char *str);

int	ft_print_hex(size_t nbr, char *base)
{
	int	nb_printed;

	nb_printed = 0;
	nb_printed = ft_putnbr_long_base((size_t)nbr, base);

	return (nb_printed);
}

static int	ft_putnbr_long_base(size_t nbr, char *base)
{
	size_t	base_len;
	size_t	nb;
	int	nb_printed;

	nb = (size_t)nbr;
	nb_printed= 0;
	if (ft_check_base(base))
		return (0);
	base_len =(size_t)ft_baselen(base);
	if (base_len < 2)
		return (0);
	if (nb > base_len - 1)
	{
		nb_printed = ft_putnbr_long_base(nb / base_len, base);
	}
	ft_putchar_fd(base[(nb % base_len)], 1);
	nb_printed++;

	return (nb_printed);
}

static int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

static size_t	ft_baselen(char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '+' || str[count] == '-')
			return (0);
		if (str[count] < 32 || str[count] > 126)
			return (0);
		count++;
	}
	if (count < 2)
		return (0);
	return (count);
}

