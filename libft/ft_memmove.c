/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/24 12:08:46 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: unlike memcpy, this must work even when 'dest' and 'src'
//         overlap - think about what goes wrong with a naive
//         forward copy when dest is *inside* the src..src+n range.

// Step 2: cast to (unsigned char *) / (const unsigned char *) for
//         the byte-by-byte moves in both directions.

// Step 3: if dest < src, copying forward (from index 0 to n-1) is
//         safe, because you always read ahead of what you write.

// Step 4: if dest > src, copy backward instead (from index n-1
//         down to 0), so you read each byte before it gets
//         overwritten.

// Step 5: return the original 'dest' pointer.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*c_dest;
	const unsigned char	*c_src;

	c_dest = dest;
	c_src = src;
	if (!dest || !src)
		return (0);
	if (dest < src)
	{
		while (0 < n)
		{
			--n;
			*(c_dest++) = *(c_src++);
		}
	}
	else
	{
		while (0 < n)
		{
			--n;
			*(c_dest + n) = *(c_src + n);
		}
	}
	return (dest);
}
