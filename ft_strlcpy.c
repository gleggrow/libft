/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 00:32:12 by gleggrow          #+#    #+#             */
/*   Updated: 2021/05/29 12:14:46 by gleggrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;

	if (!src)
		return (0);
	y = ft_strlen((char *)src);
	x = 0;
	if (dst && src && dstsize)
	{
		while (src[x] != 0 && x < dstsize - 1)
		{
			dst[x] = src[x];
			x++;
		}	
		dst[x] = '\0';
	}
	return (y);
}
