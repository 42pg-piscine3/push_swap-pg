/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/10 22:02:38 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// Step 1: guard against NULL 's' or 'f'.

// Step 2: malloc strlen(s) + 1 bytes for the new string(newstr); on failure
//         return NULL.

// Step 3: walk 's' by index, writing f(idx, s[idx]) into the
//         matching slot of the newstr.

// Step 4: null-terminate

// Step 5: return the new string.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	idx;
	size_t			len;
	char			*newstr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	newstr = (char *)malloc(len + 1);
	if (!newstr)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		newstr[idx] = f(idx, s[idx]);
		++idx;
	}
	newstr[idx] = '\0';
	return (newstr);
}
