/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 15:57:08 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Step 1: cast both pointers to (const unsigned char *).

// Step 2: loop through the first 'n' bytes of both, comparing them
//         pairwise.

// Step 3: on the first difference, return the difference between
//         the two unsigned-char values.

// Step 4: if all 'n' bytes are equal, return 0.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c_s1;
	const unsigned char	*c_s2;

	c_s1 = s1;
	c_s2 = s2;
	while (0 < n)
	{
		if (*c_s1 != *c_s2)
			return (*c_s1 - *c_s2);
		++c_s1;
		++c_s2;
		--n;
	}
	return (0);
}
