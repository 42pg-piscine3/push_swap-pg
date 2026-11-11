/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:30:49 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/11/11 14:09:57 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdouble(double num, int precision)
{
	long long	int_part;
	int			count;

	count = 0;
	if (num < 0)
	{
		count += ft_putchar('-');
		num = -num;
	}
	int_part = (long long)num;
	count += ft_putnbr(int_part);
	if (precision > 0 && ++count)
		ft_putchar('.');
	num -= (double)int_part;
	while (precision-- > 0)
	{
		num *= 10;
		count += ft_putchar((int)num + '0');
		num -= (int)num;
	}
	return (count);
}
