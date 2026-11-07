/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 16:20:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// Step 1: guard against a NULL 's'.

// Step 2: measure 's'; if 'start' is at or past its end, the
//         substring is empty (length 0).

// Step 3: otherwise clamp 'len' so the copy never runs past the
//         end of 's' (len = min(len, slen - start)).

// Step 4: malloc 'len' + 1 bytes for the substring; on failure
//         return NULL.

// Step 5: copy 'len' bytes starting at 's + start', then
//         null-terminate.

// Step 6: return the freshly allocated substring.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	idx;
	char	*sub;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		len = 0;
	else if (len > slen - start)
		len = slen - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		sub[idx] = s[start + idx];
		++idx;
	}
	sub[idx] = '\0';
	return (sub);
}
