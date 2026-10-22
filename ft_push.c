/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:11:15 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/10/14 18:28:20 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* dest->cap is the total count, so dest always has room. */
static void	push(t_stack *dest, t_stack *src)
{
	if (src->size == 0)
		return ;
	dest->head = (dest->head - 1 + dest->cap) % dest->cap;
	dest->data[dest->head] = src->data[src->head];
	dest->size++;
	src->head = (src->head + 1) % src->cap;
	src->size--;
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b, stack_a);
}
