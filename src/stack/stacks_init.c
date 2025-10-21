/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:37:55 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/20 21:34:10 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stacks_init(t_stacks *stacks)
{
	stacks->a = ft_calloc(1, sizeof(t_stack *));
	stacks->b = ft_calloc(1, sizeof(t_stack *));
	if (!stacks->a || !stacks->b)
		error_handler(stacks, NULL);
}
