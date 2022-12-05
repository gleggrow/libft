/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 02:22:13 by gleggrow          #+#    #+#             */
/*   Updated: 2021/05/29 12:05:22 by gleggrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_str(char **strings, size_t a)
{
	while (a)
	{
		free(strings[a]);
		a--;
	}
	free(strings);
	return (0);
}

static size_t	delimiter(char *s, char c)
{
	size_t	o;

	o = 0;
	while (s[o] != c && s[o] != 0)
		o++;
	return (o);
}

static size_t	string_count(char const *s, char c)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (*s)
	{
		if (y == 0 && *s != c)
		{
			y = 1;
			x++;
		}
		else if (y == 1 && *s == c)
			y = 0;
		s++;
	}
	return (x);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	a;
	size_t	count_words;

	a = 0;
	if (!s)
		return (NULL);
	count_words = string_count((char *)s, c);
	strings = (char **)malloc(sizeof(char *) * (count_words + 1));
	if (!strings)
		return (NULL);
	while (count_words--)
	{
		while (*s == c && *s != 0)
			s++;
		strings[a] = ft_substr((char *)s, 0, delimiter((char *)s, c));
		if (!strings[a])
			return (free_str(strings, a));
		s = s + delimiter((char *)s, c);
		a++;
	}
	strings[a] = 0;
	return (strings);
}
