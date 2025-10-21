/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:37:01 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/21 01:44:04 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack *stack, t_stack *dup)
{
	t_stack			*node;
	unsigned int	i;

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
	t_stack	*top;

	top = dup;
	while (dup->next)
	{
		if (dup->number == dup->next->number)
		{
			stack_clear(&top);
			error_handler(stacks, NULL, EXIT_FAILURE);
		}
		dup = dup->next;
	}
}

void	validate(t_stacks *stacks)
{
	t_stack	*dup;

	if (is_sorted(*stacks->a))
		error_handler(stacks, NULL, EXIT_SUCCESS);
	dup = stack_dup(*stacks->a);
	stack_bubble_sort(dup);
	check_duplicates(stacks, dup);
	assign_index(*stacks->a, dup);
	stack_clear(&dup);
}
