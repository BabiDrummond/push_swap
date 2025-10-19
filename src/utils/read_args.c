/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:36:27 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/19 01:35:19 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_args(t_stacks *stacks, char **argv)
{
	char	**args;
	long	num;
	int		i;

	while (*argv)
	{
		i = 0;
		args = ft_split(*argv++, ' ');
		if (!args)
			error_handler(stacks, NULL);
		while (args[i])
		{
			num = ft_atol(args[i++]);
			if (num > INT_MAX || num < INT_MIN)
				error_handler(stacks, args);
			else
				stack_push_back(stacks->a, stack_new((int) num));
		}
		ft_split_free(args);
	}
}
