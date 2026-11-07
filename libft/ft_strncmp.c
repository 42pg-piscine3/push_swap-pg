/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/27 15:19:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Step 1: loop over up to 'n' characters of both strings at once.

// Step 2: at each index, compare s1[i] and s2[i] as *unsigned*
//         char (important for strings containing bytes > 127).

// Step 3: stop as soon as the characters differ, or as soon as a
//         '\0' is reached in either string (whichever comes first).

// Step 4: return the difference between the two differing
//         unsigned-char values, or 0 if no difference was found
//         within the first 'n' characters.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (0 < n)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
		{
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		}
		++s1;
		++s2;
		--n;
	}
	return (0);
}
