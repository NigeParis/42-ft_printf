/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 07:43:04 by nrobinso          #+#    #+#             */
/*   Updated: 2023/12/02 14:18:42 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>

# define MAX_UNSIGNED_INT 4294967295

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;


int		ft_printf(const char *, ...);
int		ft_formatcheck(va_list input, char c);
int		ft_printf_unsigned_nbr(unsigned int nb);
int		ft_printf_nbr(int nb);
size_t	ft_printf_str(char *s);
int 	ft_len_of_nbr(unsigned int nb);
size_t	ft_printf_hex(int flag, unsigned int nbr, char *base);
size_t	ft_printf_ptr(int flag, size_t nbr, char *base);
int		ft_putchar(int c);
size_t	ft_printf_char(char c);
void	ft_putstr(char *str);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlen(const char *s);


#endif
