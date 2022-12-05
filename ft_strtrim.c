/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 00:44:17 by gleggrow          #+#    #+#             */
/*   Updated: 2021/05/26 01:17:12 by gleggrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	bega(char const *s1, char const *set)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	if (!set)
		return (0);
	while (set[i] != 0)
	{
		if (set[i] == s1[a])
		{
			a++;
			i = -1;
		}
		i++;
	}
	return (a);
}

static size_t	enda(char const *s1, char const *set)
{
	size_t	i;
	size_t	x;
	size_t	y;

	i = 0;
	x = ft_strlen(s1);
	y = x;
	if (!set)
		return (0);
	while (set[i] != 0)
	{
		if (set[i] == s1[x - 1])
		{
			x--;
			i = -1;
		}
		i++;
	}
	if (y == x)
		return (0);
	return (y - x);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	size_t	c;

	if (s1 == set)
		return (ft_strdup(""));
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	if (!s1 && !set)
		return (0);
	a = bega(s1, set);
	b = enda(s1, set);
	c = ft_strlen(s1);
	return (ft_substr(s1, (unsigned int)a, (c - (a + b))));
}
