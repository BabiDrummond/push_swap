/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_del_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:20:57 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:09:24 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	stack_del_back(t_stack **top)
{
	t_stack	*temp;

	if (!top || !*top)
		return ;
	temp = *top;
	while (temp->next->next)
		temp = temp->next;
	free(temp->next);
	temp->next = NULL;
}
