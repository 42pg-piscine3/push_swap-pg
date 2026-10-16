/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:50:38 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/10/16 18:03:57 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_putptr_hex(unsigned long n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		i += ft_putptr_hex((n / 16));
	i += ft_putchar(hex[n % 16]);
	return (i);
}

int	ft_putptr(void *ptr)
{
	int				i;
	unsigned long	address;

	i = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	i += write(1, "0x", 2);
	address = (unsigned long)ptr;
	i += ft_putptr_hex(address);
	return (i);
}
