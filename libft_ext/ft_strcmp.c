/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/11/06 14:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ext.h"
// Step 1: walk both strings together while the characters match
//         and the end of s1 has not been reached.

// Step 2: stop at the first difference, or when both strings end
//         ('\0' == '\0'), which means the whole strings are equal.

// Step 3: return the difference between the two characters as
//         *unsigned* char (0 when the strings are identical).
int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
