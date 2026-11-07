/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 22:27:43 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// Step 1: copy 'n' into a 'long' so that INT_MIN can be negated
//         later without overflowing.

// Step 2: count how many characters the result needs: one per
//         digit, plus one more for a leading '-' when negative.

// Step 3: malloc that count + 1 bytes; on failure return NULL.

// Step 4: write the terminating '\0', and place a '-' at index 0
//         if the number is negative (then work with its absolute
//         value).

// Step 5: fill the digits from right to left using (num % 10).

// Step 6: return the string.

static size_t	ft_digitlen(long num)
{
	size_t	len;

	len = 1;
	if (num < 0)
	{
		++len;
		num = -num;
	}
	while (num >= 10)
	{
		num /= 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*res;

	num = n;
	len = ft_digitlen(num);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	while (num >= 10)
	{
		--len;
		res[len] = '0' + (num % 10);
		num /= 10;
	}
	--len;
	res[len] = '0' + num;
	return (res);
}
