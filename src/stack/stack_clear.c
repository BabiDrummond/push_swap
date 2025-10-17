/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:19:04 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:09:20 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	stack_clear(t_stack **top)
{
	t_stack	*next;

	if (!top)
		return ;
	while (*top)
	{
		next = (*top)->next;
		free(*top);
		*top = next;
	}
	*top = NULL;
}
