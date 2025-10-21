/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 01:17:57 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/21 20:47:36 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stacks *stacks)
{
	unsigned int	max;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	max = stack_size(*stacks->a) - 1;
	if (max < 3)
		sa(stacks);
	while (!is_sorted(*stacks->a))
	{
		i = (*stacks->a)->index;
		j = (*stacks->a)->next->index;
		k = (*stacks->a)->next->next->index;
		if (i == max && j < k)
			ra(stacks);
		else
		{
			if (i > j)
				sa(stacks);
			if (j > k)
				rra(stacks);
		}
	}
}

void	sort_five(t_stacks *stacks)
{
	unsigned int	max;

	max = stack_size(*stacks->a) - 1;
	while (stack_size(*stacks->a) > 3)
	{
		if ((*stacks->a)->index == max || (*stacks->a)->index == max - 1)
			pb(stacks);
		else
			ra(stacks);
	}
	sort_three(stacks);
	if ((*stacks->b) && (*stacks->b)->index == max - 1)
		sb(stacks);
	while (*stacks->b)
		pa(stacks);
	while (!is_sorted(*stacks->a))
		ra(stacks);
}

void	sort(t_stacks *stacks)
{
	if (stack_size(*stacks->a) <= 3)
		sort_three(stacks);
	else if (stack_size(*stacks->a) <= 5)
		sort_five(stacks);
	else
		radix(stacks);
}
