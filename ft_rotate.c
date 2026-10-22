/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:19:07 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/10/14 18:28:20 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Copy the top to the slot just past the bottom, then advance head.
** When the stack is full that slot is the top itself, which still works.
*/
static void	rotate(t_stack *stack)
{
	if (stack->size < 2)
		return ;
	stack->data[(stack->head + stack->size) % stack->cap]
		= stack->data[stack->head];
	stack->head = (stack->head + 1) % stack->cap;
}

void	ra(t_stack *stack_a)
{
	rotate(stack_a);
}

void	rb(t_stack *stack_b)
{
	rotate(stack_b);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
