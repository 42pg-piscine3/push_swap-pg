/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:46:22 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/11/11 14:15:47 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>
# include "libft.h"
# include "libft_ext.h"
# include "ft_printf.h"

// Adaptive strategy disorder thresholds: low < 0.2 <= medium < 0.5 <= high
# define ADAPTIVE_LOW 0.2
# define ADAPTIVE_HIGH 0.5

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

typedef enum e_strategy
{
	STRAT_ADAPTIVE,
	STRAT_SIMPLE,
	STRAT_MEDIUM,
	STRAT_COMPLEX
}	t_strategy;

/* Set strategy_set is set once a flag is set. It prevents multiple strategy
inputs.*/
typedef struct s_params
{
	t_strategy	strategy;
	int			flag_strat;
	int			bench;
}	t_params;

double	compute_disorder(t_stack *stack_a);
int		stack_size(t_stack *stack);

void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

int		parse_args(int argc, char **argv, t_stack **stack, t_params *params);
int		parse_flag(char *arg, t_params *params);
int		stack_add_back(t_stack **stack, int value);
int		stack_contains(t_stack *stack, int value);
void	stack_free(t_stack **stack);

void	sort_simple(t_stack **stack_a, t_stack **stack_b);
void	sort_medium(t_stack **stack_a, t_stack **stack_b);
void	sort_complex(t_stack **stack_a, t_stack **stack_b);
void	sort_adaptive(t_stack **stack_a, t_stack **stack_b);
void	print_bench(t_strategy strategy, double disorder);
void	sort_three(t_stack **stack_a);

#endif
