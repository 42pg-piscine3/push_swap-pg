/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/27 10:07:01 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	// Step 1: cast 's' to an (unsigned char *) so you can write it
	//         one byte at a time regardless of the original type.

	// Step 2: loop 'n' times, writing (unsigned char)c into each byte.

	// Step 3: return the original pointer 's' (not the moved cursor).

/**
 * @brief Fills the first n bytes of the memory area pointed to by s 
 * 			with the constant byte c.
 * 
 * @param s Pointer to the starting address of the memory block to fill
 * @param c Character to set  
 * @param n Number of bytes to copy
 * @return  
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem;
	size_t			count;

	mem = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		*mem = (unsigned char )c;
		++mem;
		++count;
	}
	return (s);
}
