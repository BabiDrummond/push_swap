/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:45:55 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 19:24:35 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_dup(t_stack *stack)
{
	t_stack	*new_stack;
	t_stack	*node;
	int		size;

	new_stack = NULL;
	size = stack_size(stack);
	while (size--)
	{
		node = stack_new(stack->number);
		stack_push_back(&new_stack, node);
		stack = stack->next;
	}
	return (new_stack);
}
