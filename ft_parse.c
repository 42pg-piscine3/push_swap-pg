/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:30:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/10/15 17:30:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Converts a whole token to int. The token must be an optional single
** sign followed by digits only, and fit in an int.
*/
static int	token_to_int(char *str, int *out)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (!*str)
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (sign * result > INT_MAX || sign * result < INT_MIN)
			return (0);
		str++;
	}
	if (*str)
		return (0);
	*out = (int)(sign * result);
	return (1);
}

static int	add_tokens(char **tab, t_stack **stack)
{
	int	value;
	int	idx;

	idx = 0;
	while (tab[idx])
	{
		if (!token_to_int(tab[idx], &value))
			return (0);
		if (stack_contains(*stack, value))
			return (0);
		if (!stack_add_back(stack, value))
			return (0);
		idx++;
	}
	return (1);
}

/*
** Splits one argument into tokens and adds them to the stack.
** An argument with no tokens ("" or "   ") is an error.
*/
static int	parse_arg(char *arg, t_stack **stack)
{
	char	**tab;
	int		valid;

	tab = split_ws(arg);
	if (!tab)
		return (0);
	valid = tab[0] && add_tokens(tab, stack);
	free_split(tab);
	return (valid);
}

int	parse_args(int argc, char **argv, t_stack **stack)
{
	int	idx;

	idx = 1;
	while (idx < argc)
	{
		if (!parse_arg(argv[idx], stack))
			return (0);
		idx++;
	}
	return (1);
}
