/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:16:12 by hrahovha          #+#    #+#             */
/*   Updated: 2023/01/31 14:00:39 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	siz;
	void	*mem;

	siz = count * size;
	if (size && count)
	{
		if ((siz < count) || (siz < size))
			return (NULL);
	}
	mem = (void *) malloc(siz);
	if (!mem)
		return (NULL);
	ft_bzero(mem, siz);
	return (mem);
}
