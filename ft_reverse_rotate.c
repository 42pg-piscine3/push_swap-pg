/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:27:53 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/10/14 18:28:03 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Step head back one slot, then copy the bottom into it. */
static void	reverse_rotate(t_stack *stack)
{
	if (stack->size < 2)
		return ;
	stack->head = (stack->head - 1 + stack->cap) % stack->cap;
	stack->data[stack->head]
		= stack->data[(stack->head + stack->size) % stack->cap];
}

void	rra(t_stack *stack_a)
{
	reverse_rotate(stack_a);
}

void	rrb(t_stack *stack_b)
{
	reverse_rotate(stack_b);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
