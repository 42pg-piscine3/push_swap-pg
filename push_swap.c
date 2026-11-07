/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:41:28 by joshtan           #+#    #+#             */
/*   Updated: 2026/11/06 13:00:00 by joshtan          ###   ########.fr       */
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
	double		disorder;

	stack_a = NULL;
	stack_b = NULL;
	if (!parse_args(argc, argv, &stack_a, &params))
	{
		stack_free(&stack_a);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (stack_a)
	{
		disorder = compute_disorder(stack_a);
		run_strategy(&params, &stack_a, &stack_b);
		if (params.bench)
			print_bench(params.strategy, disorder);
	}
	stack_free(&stack_a);
	stack_free(&stack_b);
	return (0);
}
