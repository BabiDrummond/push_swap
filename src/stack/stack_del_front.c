/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_del_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:12:40 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:09:31 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	stack_del_front(t_stack **top)
{
	t_stack	*temp;

	if (!top || !*top)
		return ;
	temp = *top;
	*top = (*top)->next;
	free(temp);
}
