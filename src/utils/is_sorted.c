/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 01:43:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/21 02:17:40 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	int		sorted;

	sorted = 1;
	while (stack->next)
	{
		if (stack->number > stack->next->number)
			sorted = 0;
		stack = stack->next;
	}
	return (sorted);
}
