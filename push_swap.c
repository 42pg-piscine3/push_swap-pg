/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:41:28 by joshtan           #+#    #+#             */
/*   Updated: 2026/11/04 13:06:19 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	double chaos = 0;
	int		size = 0;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	if (!parse_args(argc, argv, &stack_a))
	{
		stack_free(&stack_a);
		write(2, "Error\n", 6);
		return (1);
	}

	chaos = compute_disorder(stack_a);
	size = stack_size(stack_a);
	sort_three(&stack_a);
	ft_printf("\nDisorder = %f\n", chaos);
	ft_printf("Size = %d\n", size);
	stack_free(&stack_a);
	return (0);
}
