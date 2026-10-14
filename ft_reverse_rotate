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

static void	reverse_rotate(t_stack **stack)
{
    t_stack	*last;
    t_stack	*second_last;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    second_last = *stack;
    while (second_last->next->next)
        second_last = second_last->next;
    last = second_last->next;
    second_last->next = NULL;
    last->next = *stack;
    *stack = last;
}

void	rra(t_stack **stack_a)
{
    reverse_rotate(stack_a);
}

void	rrb(t_stack **stack_b)
{
    reverse_rotate(stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
}