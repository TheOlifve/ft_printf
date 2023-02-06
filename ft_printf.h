/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:13:18 by hrahovha          #+#    #+#             */
/*   Updated: 2023/02/06 20:37:43 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_type(va_list arg, const char type);
int	ft_printf(const char *str, ...);
int	ft_p_char(int c);
int	ft_p_string(const char *str);
int	ft_p_int(int num);
int	ft_p_uint(unsigned int num);
int	ft_p_percent(void);
int	ft_p_hex(unsigned int num, char c);
int	ft_p_ptr(unsigned long long num);
#endif
