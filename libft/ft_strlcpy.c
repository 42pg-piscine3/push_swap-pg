/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 16:18:38 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: compute the length of 'src' (e.g. with ft_strlen) - you
//         will need it both to bound the copy and for the return.

// Step 2: edge case - if 'size' is 0, do not write to 'dst' at all
//         (there isn't even room for a '\0').

// Step 3: otherwise copy at most (size - 1) characters from 'src'
//         into 'dst', then always null-terminate 'dst' right
//         after the last character copied.

// Step 4: return the full length of 'src' (NOT the number of bytes
//         actually copied) - comparing this to 'size' is how a
//         caller detects truncation.
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (!dst || !src)
		return (0);
	while (1 < size && *src != '\0')
	{
		*dst++ = *src++;
		--size;
	}
	if (0 < size)
		*dst = '\0';
	return (lensrc);
}
