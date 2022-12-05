/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:13:01 by amdouyah          #+#    #+#             */
/*   Updated: 2022/11/04 15:09:59 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

int	ft_puthex(unsigned long nb, char *base)
{
	unsigned int	l;

	l = len(nb);
	if (nb < 16)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_puthex(nb / 16, base);
		ft_puthex(nb % 16, base);
	}
	return (l);
}
// #include <stdio.h>
// int main()
// {
// 	ft_printf("\n%d", ft_puthex(-15, "0123456789abcdef"));
// }