/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/27 22:57:12 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	// Step 1: this is just memset with c = 0 - you may call your own
	//         ft_memset(s, 0, n), or repeat the byte-writing loop here.

	// Step 2: no return value (void) - bzero never returns anything.

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*byte;

	byte = (unsigned char *)s;
	while (0 < n)
	{
		*byte = (unsigned char)0;
		++byte;
		--n;
	}
}
