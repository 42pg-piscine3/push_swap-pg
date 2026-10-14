/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:46:22 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/10/14 18:27:23 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#   define PUSH_SWAP_H
#   include <unistd.h>
#   include <stdlib.h>

typedef struct s_stack
{
    int           value;
    struct s_stack *next;
}   t_stack;
static void     swap(t_stack **stack);
void            sa(t_stack **stack_a);
void            sb(t_stack **stack_b);
void            ss(t_stack **stack_a, t_stack **stack_b);
static void     push(t_stack **dest, t_stack **src);
void            pa(t_stack **stack_a, t_stack **stack_b);
void            pb(t_stack **stack_a, t_stack **stack_b);
static void     rotate(t_stack **stack);
void            ra(t_stack **stack_a);
void            rb(t_stack **stack_b);
void            rr(t_stack **stack_a, t_stack **stack_b);
static void     reverse_rotate(t_stack **stack);
void            rra(t_stack **stack_a);
void            rrb(t_stack **stack_b);
void            rrr(t_stack **stack_a, t_stack **stack_b);

#endif