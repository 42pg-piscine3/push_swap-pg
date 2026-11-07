/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/21 14:52:56 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	// Step 1: set up a counter starting at 0.

	// Step 2: walk through 's' until the terminating '\0' is reached,
	//         incrementing the counter for every character seen.

	// Step 3: return the counter (return type is size_t, so it is
	//         always >= 0 - there's no such thing as a negative length).
size_t	ft_strlen(const char *s)
{
	const char	*start;

	start = s;
	while (*s)
		++s;
	return (s - start);
}
