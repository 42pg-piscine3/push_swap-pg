/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:41:28 by joshtan           #+#    #+#             */
/*   Updated: 2026/10/15 17:30:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	if (!parse_args(argc, argv, &stack_a))
	{
		stack_free(&stack_a);
		write(2, "Error\n", 6);
		return (1);
	}
	stack_free(&stack_a);
	return (0);
}
