/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:46:27 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 17:36:11 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stacks_free(t_stacks *stacks)
{
	if (!stacks)
		return ;
	if (stacks->a)
	{
		stack_clear(stacks->a);
		free(stacks->a);
	}
	if (stacks->b)
	{
		stack_clear(stacks->b);
		free(stacks->b);
	}
}
