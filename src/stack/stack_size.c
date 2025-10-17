/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:56:25 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:09:58 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	stack_size(t_stack *stack)
{
	int	len;

	len = 0;
	while (stack && ++len)
		stack = stack->next;
	return (len);
}
