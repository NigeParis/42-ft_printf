/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 07:43:04 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/27 18:39:51 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFTPRINTF_H
# define FT_LIBFTPRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *, ...);
int ft_formatcheck(va_list input);

#endif
