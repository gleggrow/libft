/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 11:23:43 by gleggrow          #+#    #+#             */
/*   Updated: 2021/05/29 11:47:14 by gleggrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;

	if (!dstsize)
		return (ft_strlen(src));
	x = ft_strlen(dst);
	y = 0;
	while (x < dstsize - 1 && src[y] != 0)
	{
		dst[x] = src[y];
		y++;
		x++;
	}
	dst[x] = '\0';
	x = ft_strlen(dst) - y;
	if (x >= dstsize)
		return ((ft_strlen(src)) + dstsize);
	else
		return (x + (ft_strlen(src)));
}
