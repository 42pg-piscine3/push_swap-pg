/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 14:57:37 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

// Step 1: special case from the subject - if 'nmemb' or 'size' is
//         0, you must still return a unique pointer that can be
//         passed to free() (e.g. by allocating a minimal buffer).

// Step 2: guard against integer overflow before multiplying:
//         nmemb * size must not wrap around size_t. (Check
//         something like: size != 0 && nmemb > SIZE_MAX / size.)

// Step 3: call malloc() with the total byte count (nmemb * size).

// Step 4: if malloc() returns NULL, propagate that and return NULL.

// Step 5: zero out the whole allocated block (reuse your own
//         ft_bzero or ft_memset here).

// Step 6: return the pointer to the zeroed block.
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
