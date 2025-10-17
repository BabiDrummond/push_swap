/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_iter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:10:25 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:09:34 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	stack_iter(t_stack *stack, void (*f)(int))
{
	if (!stack || !f)
		return ;
	while (stack)
	{
		(*f)(stack->number);
		stack = stack->next;
	}
}
