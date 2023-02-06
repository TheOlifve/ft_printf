/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:28:17 by hrahovha          #+#    #+#             */
/*   Updated: 2023/01/31 14:03:46 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_mem(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*temp_dst;
	unsigned const char	*temp_src;

	i = 0;
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned const char *)src;
	if (dst && src && temp_dst > temp_src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			temp_dst[i] = temp_src[i];
		}
	}
	else if (dst && src && temp_dst <= temp_src)
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return ((unsigned char *)temp_dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst || !src)
		return (0);
	return (ft_mem(dst, src, len));
}
