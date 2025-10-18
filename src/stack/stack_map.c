/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 02:28:00 by helios            #+#    #+#             */
/*   Updated: 2025/10/18 17:35:45 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		stack_push_back(&top, node);
		stack = stack->next;
	}
	return (top);
}
