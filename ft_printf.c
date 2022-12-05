/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:54:06 by amdouyah          #+#    #+#             */
/*   Updated: 2022/11/04 16:12:55 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//va_arg macro/ accesses the next variadic function argument
//Variadic functions are functions that can take a variable number of arguments

#include "ft_printf.h"

int	ft_conver(const char *p, va_list ap, int i, int *res)
{
	if (p[i] == 'c')
		*res += ft_putchar(va_arg(ap, int));
	else if (p[i] == 's')
		*res += ft_putstr(va_arg(ap, char *));
	else if (p[i] == 'i' || p[i] == 'd')
		*res += ft_putnbr(va_arg(ap, int));
	else if (p[i] == 'u')
		*res += ft_putnbru(va_arg(ap, unsigned int));
	else if (p[i] == 'x')
		*res += ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (p[i] == 'X')
		*res += ft_puthex(va_arg(ap, unsigned int ), "0123456789ABCDEF");
	else if (p[i] == 'p')
	{
		*res += ft_putstr("0x");
		*res += ft_puthex(va_arg(ap, long), "0123456789abcdef");
	}
	else
		*res += ft_putchar('%');
	return (*res);
}

int	ft_printf(const char *p, ...)
{
	va_list	ap;
	int		res;
	int		i;

	va_start(ap, p);
	res = 0;
	i = 0;
	while (p[i])
	{
		if (p[i] == '%')
		{
			i++;
			ft_conver(p, ap, i, &res);
			i++;
		}
		else
			res += ft_putchar(p[i++]);
	}
	va_end(ap);
	return (res);
}
