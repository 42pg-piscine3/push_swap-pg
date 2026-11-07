/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/26 10:00:16 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LIBFT_OFFSET_UP_TO_LOW 32
// Step 1: check whether 'c' is an uppercase letter ('A' to 'Z').
// Step 2: if so, shift it to the matching lowercase letter.
// Step 3: otherwise, return 'c' unchanged.

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += LIBFT_OFFSET_UP_TO_LOW;
	return (c);
}
