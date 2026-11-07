/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 15:40:24 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Step 1: compute dstlen, the current length of 'dst', and srclen,
//         the length of 'src'.

// Step 2: edge case - if dstlen >= size, 'dst' is already full/not
//         properly bounded: leave it untouched and return
//         size + srclen.

// Step 3: otherwise, figure out how much room is left to append
//         into: (size - dstlen - 1) bytes at most.

// Step 4: append that many characters from 'src' right after the
//         existing content of 'dst' (starting at dst + dstlen),
//         then null-terminate.

// Step 5: return dstlen + srclen - the total length the string
//         *would* have had if 'size' had been big enough.

/**
 * @brief 	size-bounded NUL-terminated string concatenation
 * 
 * Appends the NUL-terminated string src to the end of dst. It will append 
 * at most size - strlen(dst) - 1 bytes. It will then NUL-terminate.
 * The initial byte of src shall overwrite the NUL byte at the end of dst.
 *  terminating NUL byte shall be appended to the result, 
 *  unless its location would be at or beyond dst + dstsize. 
 *  If copying takes place between objects that overlap, the behavior is 
 *  undefined.
 * @param dst The destination string to which the content of src is appended.
 * @param src The source string to be appended to dst.
 * @param size the total size of the destination buffer, meaning the full 
 * capacity allocated for the string including space for the null terminator 
 * @return size_t 
 *  initial length of the string (if any) pointed to by dst, 
 * 	as limited by dstsize plus the length of the string pointed to by src; 
 *  that is, the value that would be returned by 
 *  strnlen(dst, dstsize) + strlen(src) before the strlcat() call.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	lencat;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size <= lendst)
	{
		return (size + lensrc);
	}
	lencat = 0;
	while (src[lencat] != '\0' && lendst + lencat + 1 < size)
	{
		dst[lendst + lencat] = src[lencat];
		++lencat;
	}
	dst[lendst + lencat] = '\0';
	return (lendst + lensrc);
}
