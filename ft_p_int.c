/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:02:04 by hrahovha          #+#    #+#             */
/*   Updated: 2023/02/06 19:04:51 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_uitoa(unsigned int n)
{
	int				len;
	unsigned int	n_tmp;
	char			*s;

	len = 1;
	n_tmp = n;
	while (n_tmp > 9)
	{
		n_tmp = n_tmp / 10;
		len++;
	}
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (len > 0)
	{
		len--;
		s[len] = n % 10 + 48;
		n = n / 10;
	}
	return (s);
}

int	ft_p_uint(unsigned int n)
{
	int		len;
	char	*s;

	s = ft_uitoa(n);
	if (!s)
		return (0);
	len = ft_p_string(s);
	free(s);
	return (len);
}

int	ft_p_int(int num)
{
	int		len;
	char	*s;

	s = ft_itoa(num);
	if (!s)
		return (0);
	len = ft_p_string(s);
	free(s);
	return (len);
}
