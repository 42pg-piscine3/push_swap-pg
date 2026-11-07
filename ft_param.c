/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/11/07 12:27:59 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Only one strategy selector may be given.
static int	set_strategy(t_params *params, t_strategy strategy)
{
	if (params->flag_strat)
		return (-1);
	params->strategy = strategy;
	params->flag_strat = 1;
	return (1);
}

// Returns 1 if arg is a known flag (recorded in params), 0 if arg is not a
// flag (does not start with "--"), and -1 for an unknown or conflicting flag.
int	parse_flag(char *arg, t_params *params)
{
	if (arg[0] != '-' || arg[1] != '-')
		return (0);
	if (ft_strcmp(arg, "--simple") == 0)
		return (set_strategy(params, STRAT_SIMPLE));
	if (ft_strcmp(arg, "--medium") == 0)
		return (set_strategy(params, STRAT_MEDIUM));
	if (ft_strcmp(arg, "--complex") == 0)
		return (set_strategy(params, STRAT_COMPLEX));
	if (ft_strcmp(arg, "--adaptive") == 0)
		return (set_strategy(params, STRAT_ADAPTIVE));
	if (ft_strcmp(arg, "--bench") == 0)
	{
		params->bench = 1;
		return (1);
	}
	return (-1);
}
