/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_duplicates.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:37:01 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 19:37:36 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validate_duplicates(t_stacks *stacks)
{
	t_stack	*new;
	t_stack	*top;

	new = stack_dup(*stacks->a);
	stack_bubble_sort(new);
	top = new;
	while (new->next)
	{
		if (new->number == new->next->number)
		{
			stack_clear(&top);
			error_handler(stacks, NULL);
		}
		new = new->next;
	}
	stack_clear(&top);
}
