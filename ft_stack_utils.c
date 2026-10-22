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

/*
** Links node in just above the head, which in a circular list is the
** bottom. The head does not move, so the caller decides whether node
** becomes the new top (push) or stays at the bottom (add_back).
*/
void	stack_link(t_stack **stack, t_stack *node)
{
	if (!*stack)
	{
		node->prev = node;
		node->next = node;
		*stack = node;
		return ;
	}
	node->prev = (*stack)->prev;
	node->next = *stack;
	(*stack)->prev->next = node;
	(*stack)->prev = node;
}

int	stack_add_back(t_stack **stack, int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->value = value;
	stack_link(stack, node);
	return (1);
}

int	stack_contains(t_stack *stack, int value)
{
	t_stack	*node;

	if (!stack)
		return (0);
	if (stack->value == value)
		return (1);
	node = stack->next;
	while (node != stack)
	{
		if (node->value == value)
			return (1);
		node = node->next;
	}
	return (0);
}

/* Breaks the circle at the bottom, then frees it like a plain list. */
void	stack_free(t_stack **stack)
{
	t_stack	*next;

	if (!*stack)
		return ;
	(*stack)->prev->next = NULL;
	while (*stack)
	{
		next = (*stack)->next;
		free(*stack);
		*stack = next;
	}
}
