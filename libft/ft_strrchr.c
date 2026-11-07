/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/27 15:27:08 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: same '\0' subtlety as strchr - it must be considered a
//         valid match target.

// Step 2: unlike strchr you need the *last* match, so either scan
//         once keeping track of the last matching position seen,
//         or find the length first and scan backward from the end.

// Step 3: return a pointer to the last match found, or NULL if 'c'
//         never appears in 's'.

// (POI: Using *s++ in contol yields different results than using s++ in the 
// body of the loop. 
// The former will check the current character and then increment, while 
// the latter will increment first and then check the next character. 
// This can lead to off-by-one errors if not handled carefully.)
char	*ft_strrchr(const char *s, int c)
{
	char	*last_c;

	last_c = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_c = (char *)s;
		++s;
	}
	if (c == '\0')
		last_c = (char *)s;
	return (last_c);
}
