/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/27 15:24:33 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LIBFT_OFFSET_UP_TO_LOW 32
// Step 1: check whether 'c' is a lowercase letter ('a' to 'z').

// Step 2: if so, shift it to the matching uppercase letter
//         (the distance between 'a' and 'A' is constant).

// Step 3: otherwise, return 'c' unchanged.

int	ft_toupper(int c)
{
	if (('a' <= c) && (c <= 'z'))
		c -= LIBFT_OFFSET_UP_TO_LOW;
	return (c);
}
