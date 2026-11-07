/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/11/06 15:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ext.h"

// Turns every whitespace character (\t \n \v \f \r) into a space, so that
// ft_split(str, ' ') also splits a quoted multi-line "$(cat args.txt)".
void	ft_ws_to_space(char *str)
{
	while (*str)
	{
		if (*str >= '\t' && *str <= '\r')
			*str = ' ';
		str++;
	}
}

// Frees a NULL-terminated array from ft_split.
void	ft_free_split(char **tab)
{
	int	idx;

	idx = 0;
	while (tab[idx])
		free(tab[idx++]);
	free(tab);
}
