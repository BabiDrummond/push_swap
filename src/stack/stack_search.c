/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 23:32:57 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 23:35:12 by bmoreira         ###   ########.fr       */
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