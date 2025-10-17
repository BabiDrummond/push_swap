/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:53:12 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 21:56:07 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_stack	*stack_map(t_stack *stack, int (*f)(int))
{
	t_stack	*top;
	t_stack	*node;

	if (!stack || !f)
		return (NULL);
	top = NULL;
	while (stack)
	{
		node = stack_new((*f)(stack->number));
		if (!node)
		{
			stack_clear(&top);
			return (NULL);
		}
		stack_add_back(&top, node);
		stack = stack->next;
	}
	return (top);
}
