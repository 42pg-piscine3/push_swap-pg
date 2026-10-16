/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:49:16 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/10/16 18:03:57 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	int		i;
	long	n;

	i = 0;
	n = nb;
	if (n < 0)
	{
		i += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		i += ft_putnbr(n / 10);
	i += ft_putchar((n % 10) + '0');
	return (i);
}

int	ft_puthex(unsigned int n, int is_upper)
{
	int		i;
	char	*hex;

	i = 0;
	if (is_upper)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n >= 16)
		i += ft_puthex((n / 16), is_upper);
	i += ft_putchar(hex[n % 16]);
	return (i);
}

int	ft_put_unsigned_nbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_put_unsigned_nbr(n / 10);
	i += ft_putchar((n % 10) + '0');
	return (i);
}
