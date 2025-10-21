/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:38:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/21 00:17:10 by bmoreira         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc <= 1)
		exit (EXIT_SUCCESS);
	stacks_init(&stacks);
	read_args(&stacks, argv + 1);
	validate(&stacks);
	stack_print(*stacks.a);
	radix(&stacks);
	stack_print(*stacks.a);
	stacks_free(&stacks);
}
