/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:07:33 by hrahovha          #+#    #+#             */
/*   Updated: 2023/01/31 14:02:04 by hrahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_cmp(const char *haystack, const char *needle, size_t i, size_t j)
{
	while (haystack && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && j < ft_strlen(needle))
			{
				i++;
				j++;
			}
			if (j == ft_strlen(needle))
				return (i - j);
			else if (i < ft_strlen(haystack))
			{
				i = (i - j) + 1;
				j = 0;
			}
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (haystack && !*needle)
		return ((char *)haystack);
	if (!haystack)
		return (NULL);
	if ((!*haystack) || (len == 0))
		return (NULL);
	i = ft_cmp(haystack, needle, 0, 0);
	if (i + ft_strlen(needle) > len)
		return (NULL);
	return ((char *)haystack + i);
}
