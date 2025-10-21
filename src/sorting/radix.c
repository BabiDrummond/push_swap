/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:46:22 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/21 01:20:00 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stacks *stacks)
{
	unsigned int	mask;
	int				bits;
	int				size;

	mask = 1;
	bits = ft_count_digits_bin(stack_size(*stacks->a) - 1);
	while (bits--)
	{
		size = stack_size(*stacks->a);
		while (size--)
		{
			if (!((*stacks->a)->index & mask))
				pb(stacks);
			else
				ra(stacks);
		}
		size = stack_size(*stacks->b);
		while (size--)
			pa(stacks);
		mask = mask << 1;
	}
}
