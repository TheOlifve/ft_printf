/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:14:39 by hrahovha          #+#    #+#             */
/*   Updated: 2023/01/31 14:11:28 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	if (!dst || !src)
		return (0);
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	i = dst_len;
	if (destsize <= dst_len)
		return (src_len + destsize);
	while (src && src[j] && dst_len + 1 < destsize)
	{
		dst[dst_len] = src[j];
		j++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (i + src_len);
}
