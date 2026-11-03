/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:41:28 by joshtan           #+#    #+#             */
/*   Updated: 2026/10/16 18:03:57 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> //TODO: REMOVE!!!!!!!!!!!!!!!!!!!

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	double chaos = 0;

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
	printf("\nDisorder = %f\n", chaos);

	stack_free(&stack_a);
	return (0);
}
