/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:27:47 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/19 00:42:36 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

# define MASK 4294967296L

typedef struct s_stack
{
	int				number;
	long			index;
	struct s_stack	*next;
}	t_stack;

typedef struct s_stacks
{
	t_stack	**a;
	t_stack	**b;
}	t_stacks;

// Operations
void	push(t_stack **top, t_stack **node);
void	pa(t_stacks *stacks);
void	pb(t_stacks *stacks);
void	reverse_rotate(t_stack **top);
void	rra(t_stacks *stacks);
void	rrb(t_stacks *stacks);
void	rrr(t_stacks *stacks);
void	rotate(t_stack **top);
void	ra(t_stacks *stacks);
void	rb(t_stacks *stacks);
void	rr(t_stacks *stacks);
void	swap(t_stack **top);
void	sa(t_stacks *stacks);
void	sb(t_stacks *stacks);
void	ss(t_stacks *stacks);

// Stack funcs
void	stack_bubble_sort(t_stack *stack);
void	stack_clear(t_stack **top);
void	stack_iter(t_stack *stack, void (*f)(int));
void	stack_pop_back(t_stack **top);
void	stack_pop_front(t_stack **top);
void	stack_print(t_stack *stack);
void	stack_push_back(t_stack **top, t_stack *new);
void	stack_push_front(t_stack **top, t_stack *new);
void	stacks_free(t_stacks *stacks);
void	stacks_init(t_stacks *stacks);
t_stack	*stack_dup(t_stack *stack);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_map(t_stack *stack, int (*f)(int));
t_stack	*stack_new(int number);
t_stack	*stack_search(t_stack *stack, int target);
int		stack_size(t_stack *stack);

// Utils
void	error_handler(t_stacks *stacks, char **args);
void	read_args(t_stacks *stacks, char **argv);
void	validate(t_stacks *stacks);

#endif