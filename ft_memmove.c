/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 09:48:08 by gleggrow          #+#    #+#             */
/*   Updated: 2021/05/26 00:17:41 by gleggrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*a;
	char	*b;

	i = len;
	a = (char *)dst;
	b = (char *)src;
	if (src < dst)
	{
		while (i > 0)
		{
			i--;
			a[i] = b[i];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
