/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:20:57 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/21 00:43:47 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_pop_back(t_stack **top)
{
	t_stack	*temp;

	if (!top || !*top)
		return ;
	temp = *top;
	while (temp->next->next)
		temp = temp->next;
	temp->next = NULL;
}
