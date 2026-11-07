/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/08/21 14:33:18 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// Step 1: check whether 'c' falls within the printable range,
	//         i.e. from ' ' (space, 32) to '~' (tilde, 126) inclusive.

	// Step 2: return 1 if it does, 0 otherwise.

int	ft_isprint(int c)
{
	if ((' ' <= c) && (c <= '~'))
		return (1);
	return (0);
}
