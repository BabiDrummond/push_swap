/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:45:55 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 18:45:59 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_dup(t_stack **top)
{
	t_stack	*new_stack;
	t_stack *node;
	int		size;

	new_stack = NULL;
	size = stack_size(*top);
	while (size--)
	{
		node = stack_new((*top)->number);
		stack_push_back(&new_stack, node);
		*top = (*top)->next;
	}
	return (new_stack);
}
