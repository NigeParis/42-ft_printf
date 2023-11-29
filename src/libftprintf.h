/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 07:43:04 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/29 10:06:54 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFTPRINTF_H
# define FT_LIBFTPRINTF_H

//# include "../libft/libft.h"
# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# define MAX_UNSIGNED_INT 4294967295

int		ft_printf(const char *, ...);
int		ft_formatcheck(va_list input, char c);
int		ft_putnbrprintf_unsigned_fd(unsigned int nb, int fd);
int		ft_putnbrprintf_fd(int nb, int fd);
int		ft_putstrprintf_fd(char *s, int fd);
int 	ft_len_of_nbr(unsigned int nb);
int		ft_print_hex(int nbr, char *base);

#endif
