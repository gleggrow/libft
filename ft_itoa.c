/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 23:58:59 by gleggrow          #+#    #+#             */
/*   Updated: 2022/01/05 01:35:07 by hovalygta        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	raz(int n)
{
	int	i;

	i = 1;
	if (n == 1)
		return (1);
	while (n > 1)
	{
		i = i * 10;
		n--;
	}
	return (i);
}

static int	len(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	void	addfunc(int n, char *str, int b)
{
	int	i;
	int	a;

	a = b;
	i = 0;
	if (n < 0)
	{
		n = n * -1;
		str[i] = '-';
		i++;
		b--;
	}
	b = raz(b);
	while (i < a)
	{
		str[i] = (((n / b % 10) + 48));
		i++;
		b = b / 10;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	int		b;
	int		i;
	char	*string;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	b = len(n);
	i = 0;
	string = malloc(sizeof(char) * (b + 1));
	if (string == NULL)
		return (NULL);
	addfunc(n, string, b);
	return (string);
}
