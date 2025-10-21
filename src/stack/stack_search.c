/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 23:32:57 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/20 21:33:55 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_search(t_stack *stack, int target)
{
	while (stack)
	{
		if (stack->number == target)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
