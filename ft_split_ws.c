/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_ws.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/10/15 17:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sep(char chr)
{
	return (chr == ' ' || (chr >= '\t' && chr <= '\r'));
}

static int	count_words(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str))
			str++;
		if (*str)
			count++;
		while (*str && !is_sep(*str))
			str++;
	}
	return (count);
}

/* Skips separators, copies the next word, and advances *str past it. */
static char	*next_word(char **str)
{
	char	*word;
	int		len;
	int		idx;

	while (is_sep(**str))
		(*str)++;
	len = 0;
	while ((*str)[len] && !is_sep((*str)[len]))
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		word[idx] = (*str)[idx];
		idx++;
	}
	word[idx] = '\0';
	*str += len;
	return (word);
}

void	free_split(char **tab)
{
	int	idx;

	idx = 0;
	while (tab[idx])
		free(tab[idx++]);
	free(tab);
}

/*
** Like ft_split, but splits on any whitespace (space, \t, \n, \v, \f, \r)
** so a quoted multi-line argument such as "$(cat args.txt)" works.
*/
char	**split_ws(char *str)
{
	char	**tab;
	int		count;
	int		pos;

	count = count_words(str);
	tab = malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	pos = 0;
	while (pos < count)
	{
		tab[pos] = next_word(&str);
		if (!tab[pos])
		{
			free_split(tab);
			return (NULL);
		}
		pos++;
	}
	tab[pos] = NULL;
	return (tab);
}
