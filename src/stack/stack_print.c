/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 02:27:41 by helios            #+#    #+#             */
/*   Updated: 2025/10/18 23:41:46 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_print(t_stack *stack)
{
	while (stack)
	{
		ft_printf("n: %d, i: %d\n", stack->number, stack->index);
		stack = stack->next;
	}
}
