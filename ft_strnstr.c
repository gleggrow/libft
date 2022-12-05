/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:14:08 by gleggrow          #+#    #+#             */
/*   Updated: 2021/05/26 04:57:05 by gleggrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != 0 && i < len)
	{
		if (haystack[i] == needle[b])
		{
			while (haystack[i + b] == needle[b] && (i + b) < len)
			{
				if (needle[b + 1] == 0)
					return ((char *)&haystack[i]);
				b++;
			}
			b = 0;
		}
		i++;
	}
	return (0);
}
