/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:12:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:09:08 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	stack_add_back(t_stack **top, t_stack *new)
{
	if (!top || !new)
		return ;
	if (!*top)
	{
		*top = new;
		return ;
	}
	stack_last(*top)->next = new;
}
