/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:30:49 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/11/04 12:45:44 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putdouble(double num, int precision)
{
	int			count;
	long long	int_part;
	double		frac_part;
	int			digit;

	count = 0;
	if (num < 0)
	{
		count += ft_putchar('-');
		num = -num;
	}
	int_part = (long long)num;
	count += ft_putnbr(int_part);
	if (precision > 0)
	{
		count += ft_putchar('.');
		frac_part = num - (double)int_part;
		while (precision > 0)
		{
			frac_part *= 10;
			digit = (int)frac_part;
			count += ft_putchar(digit + '0');
			frac_part -= digit;
			precision--;
		}
	}
	return (count);
}