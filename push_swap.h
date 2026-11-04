/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:46:22 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/11/04 13:06:25 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

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

int		parse_args(int argc, char **argv, t_stack **stack);
char	**split_ws(char *str);
void	free_split(char **tab);
int		stack_add_back(t_stack **stack, int value);
int		stack_contains(t_stack *stack, int value);
void	stack_free(t_stack **stack);

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_put_unsigned_nbr(unsigned int n);
int		ft_puthex(unsigned int n, int is_upper);
int		ft_putptr(void *ptr);
int		ft_putdouble(double num, int precision);
int		ft_printf(const char *str, ...);

void	sort_three(t_stack **stack_a);

#endif
