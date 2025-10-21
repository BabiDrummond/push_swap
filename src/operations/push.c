/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:07:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/21 00:29:19 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **top, t_stack **node)
{
	t_stack	*temp;

	if (!top || !node || !*node)
		return ;
	temp = *node;
	stack_pop_front(node);
	stack_push_front(top, temp);
}

void	pa(t_stacks *stacks)
{
	push(stacks->a, stacks->b);
	ft_printf("pa\n");
}

void	pb(t_stacks *stacks)
{
	push(stacks->b, stacks->a);
	ft_printf("pb\n");
}

// int main(void)
// {
// 	#include <stdio.h>
//     // Test with ints
// 	t_stack *head_a = NULL;
// 	t_stack *head_b = NULL;
// 	int vals[] = {9, 3, 1, 2, 4};
// 	int vals2[] = {8, 3, 1, 2, 4};
// 	int i = 0;

// 	while (i < 5)
// 		stack_push_back(&head_a, stack_new(vals[i++]));
// 	i = 0;
// 	while (i < 5)
// 		stack_push_back(&head_b, stack_new(vals2[i++]));

// 	printf("Before: ");
// 	stack_print(head_a);
// 	stack_print(head_b);
// 	push(&head_a, &head_b);
// 	printf("After1: ");
// 	stack_print(head_a);
// 	stack_print(head_b);
// 	push(&head_a, &head_b);
// 	printf("After2: ");
// 	stack_print(head_a);
// 	stack_print(head_b);
// 	push(&head_a, &head_b);
// 	printf("After3: ");
// 	stack_print(head_a);
// 	stack_print(head_b);
// 	push(&head_a, &head_b);
// 	printf("After4: ");
// 	stack_print(head_a);
// 	stack_print(head_b);
// 	push(&head_a, &head_b);
// 	printf("After5: ");
// 	stack_print(head_a);
// 	stack_print(head_b);
// }