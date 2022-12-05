/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 03:14:29 by gleggrow          #+#    #+#             */
/*   Updated: 2021/05/26 04:40:02 by gleggrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	size_t			b;
	char			*c;

	if (!s || !f)
		return (0);
	b = ft_strlen(s);
	c = (char *)malloc(sizeof(char) * (b + 1));
	if (!c)
		return (NULL);
	a = 0;
	while (s[a] != 0)
	{
		c[a] = f(a, s[a]);
		a++;
	}
	c[a] = 0;
	return (c);
}
