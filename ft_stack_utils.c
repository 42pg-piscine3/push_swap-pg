/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:30:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/10/15 16:30:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_init(t_stack *stack, int cap)
{
	stack->head = 0;
	stack->size = 0;
	stack->cap = cap;
	stack->data = malloc(sizeof(int) * cap);
	return (stack->data != NULL);
}

/* Value at position pos from the top (0 is the top). */
int	stack_at(t_stack *stack, int pos)
{
	return (stack->data[(stack->head + pos) % stack->cap]);
}

int	stack_add_back(t_stack *stack, int value)
{
	if (stack->size == stack->cap)
		return (0);
	stack->data[(stack->head + stack->size) % stack->cap] = value;
	stack->size++;
	return (1);
}

int	stack_contains(t_stack *stack, int value)
{
	int	pos;

	pos = 0;
	while (pos < stack->size)
	{
		if (stack_at(stack, pos) == value)
			return (1);
		pos++;
	}
	return (0);
}

void	stack_free(t_stack *stack)
{
	free(stack->data);
	stack->data = NULL;
	stack->size = 0;
}
