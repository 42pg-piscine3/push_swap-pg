/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bench.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/11/06 13:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Prints a 0..1 ratio as a percentage with two decimals, e.g. 41.67
static void	put_percent_fd(double ratio, int fd)
{
	int	hundredths;

	hundredths = (int)(ratio * 10000 + 0.5);
	ft_putnbr_fd(hundredths / 100, fd);
	ft_putchar_fd('.', fd);
	ft_putnbr_fd(hundredths % 100 / 10, fd);
	ft_putnbr_fd(hundredths % 10, fd);
}

// Label for the --bench report; adaptive shows the regime it would pick.
static char	*strategy_label(t_strategy strategy, double disorder)
{
	if (strategy == STRAT_SIMPLE)
		return ("Simple / O(n^2)");
	if (strategy == STRAT_MEDIUM)
		return ("Medium / O(n√n)");
	if (strategy == STRAT_COMPLEX)
		return ("Complex / O(n log n)");
	if (disorder < ADAPTIVE_LOW)
		return ("Adaptive (low disorder) / O(n)");
	if (disorder < ADAPTIVE_HIGH)
		return ("Adaptive (medium disorder) / O(n√n)");
	return ("Adaptive (high disorder) / O(n log n)");
}

// --bench report, on stderr so it never mixes with the ops on stdout.
void	print_bench(t_strategy strategy, double disorder)
{
	ft_putstr_fd("[bench] disorder: ", 2);
	put_percent_fd(disorder, 2);
	ft_putstr_fd("%\n", 2);
	ft_putstr_fd("[bench] strategy: ", 2);
	ft_putstr_fd(strategy_label(strategy, disorder), 2);
	ft_putstr_fd("\n", 2);
}
