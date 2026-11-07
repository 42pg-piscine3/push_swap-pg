/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 15:39:49 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// Step 1: skip any leading whitespace characters (space, '\t',
	//         '\n', '\v', '\f', '\r').

	// Step 2: handle at most one optional sign character, '+' or '-';
	//         remember which sign it was.

	// Step 3: read consecutive digit characters, building up the
	//         result as you go: result = result * 10 + (digit value).

	// Step 4: stop at the first non-digit character (there is no need
	//         to validate anything after that, atoi just ignores it).

	// Step 5: apply the sign, and return the final value.
	//         (integer overflow here is undefined behaviour, same as
	//         in the real atoi - you don't need to guard against it.)
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		++i;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		++i;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		++i;
	}
	return (result * sign);
}
