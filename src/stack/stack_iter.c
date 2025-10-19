/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_iter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:10:25 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 23:22:56 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_iter(t_stack *stack, void (*f)(int))
{
	if (!f)
		return ;
	while (stack)
	{
		(*f)(stack->number);
		stack = stack->next;
	}
}
