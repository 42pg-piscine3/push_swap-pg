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
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/*
** Ring buffer: the top is data[head] and position i from the top is
** data[(head + i) % cap]. Both stacks get cap = total count, so a push
** never overflows.
*/
typedef struct s_stack
{
	int	*data;
	int	head;
	int	size;
	int	cap;
}	t_stack;

void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);

int		parse_args(int argc, char **argv, t_stack *stack);
char	**split_ws(char *str);
void	free_split(char **tab);
int		count_words(char *str);
int		stack_init(t_stack *stack, int cap);
int		stack_at(t_stack *stack, int pos);
int		stack_add_back(t_stack *stack, int value);
int		stack_contains(t_stack *stack, int value);
void	stack_free(t_stack *stack);

#endif
