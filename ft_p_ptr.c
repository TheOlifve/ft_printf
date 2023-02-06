/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_ptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:07:01 by hrahovha          #+#    #+#             */
/*   Updated: 2023/02/06 19:12:22 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	n_p_len(unsigned long long num)
{
	int	i;

	i = 1;
	while (num > 15)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

char	*ft_ptr(unsigned long long num)
{
	unsigned long long	i;
	int					len;
	char				*s;

	i = 0;
	len = n_p_len(num);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (len > 0)
	{
		len--;
		i = num % 16;
		if (i <= 9)
			s[len] = i + 48;
		else
			s[len] = i + 87;
		num = num / 16;
	}
	return (s);
}

int	ft_p_ptr(unsigned long long num)
{
	int		len;
	char	*s;

	if (num == 0)
		return (ft_p_string("0x0"));
	len = 2;
	ft_p_string("0x");
	s = ft_ptr(num);
	if (!s)
		return (0);
	len = len + ft_p_string(s);
	free(s);
	return (len);
}
