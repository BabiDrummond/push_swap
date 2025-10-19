/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:45:55 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 23:20:37 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_dup(t_stack *stack)
{
	t_stack	*new_stack;
	t_stack	*node;

	new_stack = NULL;
	while (stack)
	{
		node = stack_new(stack->number);
		stack_push_back(&new_stack, node);
		stack = stack->next;
	}
	return (new_stack);
}
