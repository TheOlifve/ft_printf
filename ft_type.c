/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:40:28 by hrahovha          #+#    #+#             */
/*   Updated: 2023/02/06 19:41:48 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list arg, const char type)
{
	int	len;

	len = 0;
	if (type == 'c')
		len = len + ft_p_char(va_arg(arg, int));
	else if (type == 's')
		len = len + ft_p_string(va_arg(arg, char *));
	else if (type == 'd' || type == 'i')
		len = len + ft_p_int(va_arg(arg, int));
	else if (type == 'u')
		len = len + ft_p_uint(va_arg(arg, unsigned int));
	else if (type == '%')
		len = len + ft_p_percent();
	else if (type == 'x' || type == 'X')
		len = len + ft_p_hex(va_arg(arg, unsigned int), type);
	else if (type == 'p')
		len = len + ft_p_ptr(va_arg(arg, unsigned long long));
	return (len);
}
