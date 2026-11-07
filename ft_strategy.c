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

// TODO: stub. Prints the strategy to stderr so stdout stays for ops.
void	sort_simple(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	(void)stack_b;
	ft_putstr_fd("[stub] strategy: ", 2);
	ft_putstr_fd("Simple / O(n^2)", 2);
	ft_putstr_fd("\n", 2);
}

// TODO: stub.
void	sort_medium(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	(void)stack_b;
	ft_putstr_fd("[stub] strategy: ", 2);
	ft_putstr_fd("Medium / O(n√n)", 2);
	ft_putstr_fd("\n", 2);
}

// TODO: stub.
void	sort_complex(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	(void)stack_b;
	ft_putstr_fd("[stub] strategy: ", 2);
	ft_putstr_fd("Complex / O(n log n)", 2);
	ft_putstr_fd("\n", 2);
}

// TODO: stub. Will pick the regime from the disorder.
void	sort_adaptive(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	(void)stack_b;
	ft_putstr_fd("[stub] strategy: ", 2);
	ft_putstr_fd("Adaptive", 2);
	ft_putstr_fd("\n", 2);
}
