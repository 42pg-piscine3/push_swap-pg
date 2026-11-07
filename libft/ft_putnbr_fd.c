/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 21:33:10 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: copy 'n' into a 'long' so INT_MIN negates cleanly.

// Step 2: if the number is negative, output '-' and switch to its
//         absolute value.

// Step 3: if there is more than one digit left, recurse on
//         nbr / 10 to print the higher-order digits first.

// Step 4: build the last digit into a temporary char
//         ('0' + nbr % 10), then output that char.
void	ft_putnbr_fd(int n, int fd)
{
	long			nbr;
	unsigned char	digit;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd((int)(nbr / 10), fd);
	}
	nbr = nbr % 10;
	digit = '0' + nbr;
	ft_putchar_fd(digit, fd);
}
