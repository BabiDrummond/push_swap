/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:37:01 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/19 00:02:18 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack *stack, t_stack *dup)
{
	t_stack *node;
	int		i;

	i = 0;
	while (dup)
	{
		node = stack_search(stack, dup->number);
		node->index = i++;
		dup = dup->next;
	}
}

void	check_duplicates(t_stacks *stacks, t_stack *dup)
{
	t_stack *top;

	top = dup;
	while (dup->next)
	{
		if (dup->number == dup->next->number)
		{
			stack_clear(&top);
			error_handler(stacks, NULL);
		}
		dup = dup->next;
	}
}

void	validate(t_stacks *stacks)
{
	t_stack	*dup;

	dup = stack_dup(*stacks->a);
	stack_bubble_sort(dup);
	check_duplicates(stacks, dup);
	assign_index(*stacks->a, dup);
	ft_printf("new: \n");
	stack_print(dup);
	stack_clear(&dup);
}

// dup list
// bubble sort dup
// assign index initial stack
// bubble sort index