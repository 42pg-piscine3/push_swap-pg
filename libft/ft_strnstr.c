/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 15:38:05 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: edge case - if 'little' is an empty string, real strnstr
//         returns 'big' immediately (an empty needle always
//         matches at position 0).

// Step 2: walk through 'big', but never start a comparison past
//         index 'len', and never compare more of 'big' than 'len'
//         allows even mid-comparison.

// Step 3: at each starting position in 'big', compare it against
//         'little' character by character (you can reuse a
//         strncmp-like check bounded by the remaining length).

// Step 4: return a pointer to the start of the first full match,
//         or NULL if 'little' never fully fits within the first
//         'len' characters of 'big'.

/*
Step 1 — handle the empty-needle case

Step 2 — precompute the needle's length
Know little's length up front with ft_strlen, then only try starting positions 
i in big where the entire needle could fit inside the first len characters: 
i + little_len <= len. 
This directly encodes the "match can't exceed len" rule 
— if i + little_len > len, don't even try that position.

Step 3 — outer loop: scan candidate start positions

while (big[i] != '\0' && i + little_len <= len)
Stop at the nul terminator of big, or once no further starting position could 
fit the needle within len.

Step 4 — inner loop: compare manually, character by character

j = 0;
while (little[j] != '\0' && big[i + j] == little[j])
    j++;
This walks both strings in lockstep. It stops either because little ran out 
(little[j] == '\0', meaning full match) or because the characters diverged.

Step 5 — check why the inner loop stopped

if (little[j] == '\0')
    return ((char *)(big + i));
If little[j] is '\0', every character matched — return the pointer into big 
where the match started.

Step 6 — otherwise advance and keep scanning

i++;
back to the top of the outer loop.

Step 7 — nothing found return (NULL);
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_lit;
	size_t	id_lit;
	size_t	id_big;	

	id_lit = 0;
	id_big = 0;
	len_lit = ft_strlen(little);
	if (!len_lit)
		return ((char *)big);
	while (big[id_big] != '\0' && id_big - id_lit + len_lit <= len)
	{
		if (big[id_big] == little[id_lit])
		{
			++id_big;
			++id_lit;
			if (little[id_lit] == '\0')
				return ((char *)&big[id_big - id_lit]);
		}
		else
		{
			id_big = id_big - id_lit + 1;
			id_lit = 0;
		}
	}
	return (NULL);
}
