/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 01:17:57 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/21 03:05:03 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_index(t_stack *stack)
{
	int		sorted;

	sorted = 1;
	while (stack->next)
	{
		if (stack->index > stack->next->index)
			sorted = 0;
		stack = stack->next;
	}
	return (sorted);
}

void	sort_tree(t_stacks *stacks)
{
	unsigned int	max;
	t_stack 		*i;
	t_stack 		*j;
	t_stack 		*k;
	

	i = *stacks->a;
	j = i->next;
	k = j->next;
	max = stack_size(i) - 1;
	if (i->index == max && j->index < k->index)
		ra(stacks);
	while(!is_sorted_index(i))
	{
		if (i->index > j->index)
			sa(stacks);
		else if (j->index > k->index)
			rra(stacks);
	}
}

// void	sort_tree(t_stacks *stacks)
// {
// }

void	sort(t_stacks *stacks)
{
	if (stack_size(*stacks->a) == 3)
		sort_tree(stacks);
	else
		radix(stacks);
}