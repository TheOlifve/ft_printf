/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:05:38 by hrahovha          #+#    #+#             */
/*   Updated: 2023/02/06 19:06:28 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	arg;
	int		len;

	if (!str)
		return (0);
	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i] && i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			len = len + ft_type(arg, str[i + 1]);
			i++;
		}
		else
			len = len + ft_p_char(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
