/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 00:20:12 by gleggrow          #+#    #+#             */
/*   Updated: 2021/05/26 01:40:04 by gleggrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	raz(int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i = i * 10;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	h;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			n = n * -1;
			ft_putchar_fd('-', fd);
		}
		h = raz(n);
		while (h != 0)
		{
			ft_putchar_fd((((n / h) % 10) + 48), fd);
			h = h / 10;
		}
	}
}
