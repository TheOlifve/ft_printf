/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:14:21 by hrahovha          #+#    #+#             */
/*   Updated: 2023/02/06 19:34:01 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	n_len(unsigned int num)
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

char	*ft_dtoh(unsigned int num, char c, unsigned int i)
{
	unsigned int	len;
	char			*s;	

	len = n_len(num);
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
		{
			if (c == 'x')
				s[len] = i + 87;
			else if (c == 'X')
				s[len] = i + 55;
		}
		num = num / 16;
	}
	return (s);
}

int	ft_p_hex(unsigned int num, char c)
{
	int		len;
	char	*s;

	len = 0;
	s = ft_dtoh(num, c, 0);
	if (!s)
		return (0);
	len = ft_p_string(s);
	free(s);
	return (len);
}
