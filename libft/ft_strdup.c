/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 14:51:38 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// Step 1: compute the length of 's' (e.g. with ft_strlen).

// Step 2: allocate (length + 1) bytes with malloc - the extra byte
//         is for the terminating '\0'.

// Step 3: if the allocation fails, return NULL.

// Step 4: copy 's' into the new buffer, including its terminating
//         '\0' (you can reuse your own ft_memcpy/ft_strlcpy, or
//         write the copy loop directly).

// Step 5: return the pointer to the newly allocated, duplicated
//         string.
char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		++i;
	}
	dup[i] = '\0';
	return (dup);
}
