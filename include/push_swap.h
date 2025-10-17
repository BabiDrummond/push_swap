/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:27:47 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:29:18 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"

# define TRUE 1
# define FALSE 0

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
}	t_stack;

int		push(t_stack **top, t_stack **node);
int		rotate(t_stack **top);
int		reverse_rotate(t_stack **top);
int		swap(t_stack **top);

void	stack_bubble_sort(t_stack *top);
void	stack_add_back(t_stack **top, t_stack *new);
void	stack_add_front(t_stack **top, t_stack *new);
void	stack_clear(t_stack **top);
void	stack_del_back(t_stack **top);
void	stack_del_front(t_stack **top);
void	stack_iter(t_stack *stack, void (*f)(int));
void	stack_print(t_stack *top);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_map(t_stack *stack, int (*f)(int));
t_stack	*stack_new(int number);
int		stack_size(t_stack *stack);

#endif