/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:28:53 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/16 16:55:15 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include "./print_f/ft_printf.h"
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	long			current_position; // por usar
	int				index;
	int				push_cost;
	bool			above_medium;
	bool			cheapest;
	struct s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

// Handle errors 

int			check_duplicate(t_stack *stack, int n); // por criar
void		ft_free_stack(t_stack **stack); // criar
void		free_errors(t_stack **stack, char **argv, bool flag);// criar
int			check_syntax(char *str); // criar

// stack initialization

void		stack_ini(t_stack **a, char **av, bool flag);
void		append_node(t_stack **stack, int n);

// Nodes initialialization

void		int_node_a(t_stack *a, t_stack *b);
void		index(t_stack *stack);
void		cost_analysis(t_stack *a, t_stack *b);
void		set_target_a(t_stack *a, t_stack *b);
void		set_target_b(t_stack *a, t_stack *b);
void		set_cheapest(t_stack *stack);

// Algorithm
void		sort_stack(t_stack **a, t_stack **b);
void		sort_stacks_a_b(t_stack **a, t_stack **b);

// Stack Utils

t_stack		find_last(t_stack *stack);
t_stack 	find_max(t_stack *stack);
t_stack 	find_min(t_stack *stack);
t_stack		*return_cheapest(t_stack *stack);
int			stack_len(t_stack *stack);
bool		is_sorted(t_stack *stack);
void		sort_tree(t_stack **stack);
void		move_a_to_b(t_stack *a, t_stack *b);


// Stack moves

void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);

#endif