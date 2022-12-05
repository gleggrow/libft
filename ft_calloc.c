/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 23:51:31 by gleggrow          #+#    #+#             */
/*   Updated: 2021/05/26 01:56:58 by gleggrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			x;
	unsigned char	*y;

	x = count * size;
	y = malloc(x);
	if (!y)
		return (NULL);
	else
		ft_bzero(y, x);
	return (y);
}
