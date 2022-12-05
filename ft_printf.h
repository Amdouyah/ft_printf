/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:06:34 by amdouyah          #+#    #+#             */
/*   Updated: 2022/11/04 16:16:57 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *p, ...);
int	ft_putad(int nb, char *base);
int	ft_putchar(char c);
int	ft_puthex(unsigned long nb, char *base);
int	ft_putnbr(int nb);
int	ft_putnbru(unsigned long nb);
int	ft_putstr(char *s);

#endif