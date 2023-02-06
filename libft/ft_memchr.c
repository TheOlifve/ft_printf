/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:40:02 by hrahovha          #+#    #+#             */
/*   Updated: 2023/01/31 14:03:25 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	if (!s)
		return (0);
	temp = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		if (temp[i] == (unsigned char)c)
			return ((unsigned char *)temp + i);
		i++;
	}
	return (0);
}
