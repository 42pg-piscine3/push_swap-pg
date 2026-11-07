/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 19:25:45 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: guard against NULL 's1' or 'set'.

// Step 2: move a 'beg' index forward while 's1[beg]' is part of
//         'set' (ft_strchr(set, s1[beg]) finds it).

// Step 3: move an 'end' index (starting at strlen) backward while
//         'end' is still ahead of 'beg' and 's1[end - 1]' is in
//         'set'.

// Step 4: the trimmed content is s1[beg .. end) - hand that range
//         to ft_substr to allocate and copy it.

// Step 5: return that substring (NULL is propagated on malloc
//         failure).

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	end = ft_strlen(s1);
	while (s1[beg] != '\0' && ft_strchr(set, s1[beg]) != NULL)
		++beg;
	while (end > beg && ft_strchr(set, s1[end - 1]) != NULL)
		--end;
	return (ft_substr(s1, (unsigned int)beg, end - beg));
}

/*
Goal: trim spaces (" ") from the string "   HELLO   ".
1. Before the loops: beg = 0, end = 11.
2. First loop runs: It skips the 3 spaces at the front. 
   It stops at 'H'. Now beg = 3.
3. Second loop runs: It skips the 3 spaces at the back. It stops right after
   'O'. Now end = 8.
4. The final calculation: The function calls ft_substr(s1, 3, 8 - 3).

This safely copies 5 characters starting from index 3, perfectly extracting
"HELLO".
*/