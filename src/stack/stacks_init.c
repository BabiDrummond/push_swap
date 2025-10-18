/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:37:55 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 19:44:36 by bmoreira         ###   ########.fr       */
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
