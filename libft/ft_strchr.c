/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 15:40:43 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: remember that 'c' can be '\0' - the terminating byte
//         counts as part of the string for this function, so your
//         loop condition must still check position '\0' itself.

// Step 2: Loop through 's', compare each character to 'c' (cast to char).
//         If they match, exit the loop.

// Step 3: In the loop, if you reach the end of the string (the '\0' byte) 
//         without a match, return NULL.

// Step 4: Upon exit of loop return a pointer to that position in 's'.
//         This will be the first occurrence of 'c' in 's', 
//         or the terminating '\0' if 'c' is '\0'.
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		++s;
	}
	return ((char *)s);
}
