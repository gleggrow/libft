/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 00:45:52 by gleggrow          #+#    #+#             */
/*   Updated: 2021/05/26 00:47:04 by gleggrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*x;
	size_t	y;

	if (!(s + start) || !s)
		return (NULL);
	y = (ft_strlen(s + start));
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	if (y < len)
		len = y;
	x = (char *)malloc(len + 1);
	if (!x)
		return (NULL);
	ft_strlcpy(x, s + start, len + 1);
	return (x);
}
