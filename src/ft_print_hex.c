/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:15:33 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/29 10:16:40 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

static int	ft_putnbr_long_base(long int nbr, char *base);
static int	ft_check_base(char *base);
static int	ft_baselen(char *str);

#include "unistd.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}



int	ft_print_hex(int nbr, char *base)
{
	long int	nb;
	int			nb_printed;

	nb_printed = 0;
	nb = (long int)nbr;
	nb_printed = ft_putnbr_long_base(nb, base);

	return (nb_printed);
}

static int	ft_putnbr_long_base(long int nbr, char *base)
{
	long int	base_len;
	int			nb_printed;
	int			neg;

	nb_printed= 0;
	neg = 0;

	if (ft_check_base(base))
		return (0);
	base_len = ft_baselen(base);
	if (base_len < 2)
		return (0);
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		neg = 1;
		nbr *= -1;
	}
	if (nbr > base_len - 1)
	{
		nb_printed += ft_putnbr_long_base(nbr / base_len, base);
	}
	ft_putchar_fd(base[(nbr % base_len)], 1);

	return (nb_printed + neg);
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

static int	ft_baselen(char *str)
{
	int	count;

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



//int	main(int argc, char *argv[])
int	main(void)
{
	char	base[] = "01";
	int result = 0;
//	argc = 1;


//	ft_putnbr_base(-170, argv[1]);
	result = ft_print_hex(-30, base);
	printf("%d", result);
		return (0);
}

