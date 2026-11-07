/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 15:45:42 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// Step 1: check whether 'c' falls within the digit range ('0' to '9').
	// Step 2: return 1 if it matches, 0 otherwise.
int	ft_isdigit(int c)
{
	if (('0' <= c) && (c <= '9'))
		return (1);
	return (0);
}
