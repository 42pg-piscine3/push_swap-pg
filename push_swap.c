/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:41:28 by joshtan           #+#    #+#             */
/*   Updated: 2026/11/07 12:46:23 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	run_strategy(t_params *params, t_stack **stack_a,
		t_stack **stack_b)
{
	if (params->strategy == STRAT_SIMPLE)
		sort_simple(stack_a, stack_b);
	else if (params->strategy == STRAT_MEDIUM)
		sort_medium(stack_a, stack_b);
	else if (params->strategy == STRAT_COMPLEX)
		sort_complex(stack_a, stack_b);
	else
		sort_adaptive(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	t_params	params;
	double chaos = 0;
	int		size = 0;

	stack_a = NULL;
	stack_b = NULL;
	if (!parse_args(argc, argv, &stack_a, &params))
	{
		stack_free(&stack_a);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	chaos = compute_disorder(stack_a);
	run_strategy(&params, &stack_a, &stack_b);
	if (params.bench)
		print_bench(params.strategy, chaos);
	size = stack_size(stack_a);
	sort_three(&stack_a);
	ft_printf("\nDisorder = %f\n", chaos);
	ft_printf("Size = %d\n", size);
	stack_free(&stack_a);
	stack_free(&stack_b);
	return (0);
}
