/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/11/06 13:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*strategy_label(t_strategy strategy, double disorder)
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

// TODO: stub. Prints the strategy to stderr so stdout stays for ops.
void	sort_simple(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	(void)stack_b;
	ft_putstr_fd("[stub] strategy: ", 2);
	ft_putstr_fd(strategy_label(STRAT_SIMPLE, 0), 2);
	ft_putstr_fd("\n", 2);
}

// TODO: stub.
void	sort_medium(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	(void)stack_b;
	ft_putstr_fd("[stub] strategy: ", 2);
	ft_putstr_fd(strategy_label(STRAT_MEDIUM, 0), 2);
	ft_putstr_fd("\n", 2);
}

// TODO: stub.
void	sort_complex(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	(void)stack_b;
	ft_putstr_fd("[stub] strategy: ", 2);
	ft_putstr_fd(strategy_label(STRAT_COMPLEX, 0), 2);
	ft_putstr_fd("\n", 2);
}

// TODO: stub. The regime is picked from disorder in strategy_label.
void	sort_adaptive(t_stack **stack_a, t_stack **stack_b, double disorder)
{
	(void)stack_a;
	(void)stack_b;
	ft_putstr_fd("[stub] strategy: ", 2);
	ft_putstr_fd(strategy_label(STRAT_ADAPTIVE, disorder), 2);
	ft_putstr_fd("\n", 2);
}
