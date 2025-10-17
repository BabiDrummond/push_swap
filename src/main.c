/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:38:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:31:13 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	cleanup(t_stack **top, char **args, int exit_code)
{
	if (top)
	{
		stack_clear(top);
		free(top);
	}
	if (args)
		ft_split_free(args);
	if (exit_code == EXIT_FAILURE && ft_printf("Error\n"))
		exit (EXIT_FAILURE);
}

void	read_args(t_stack **top, char **argv)
{
	char	**args;
	long	num;
	int		i;

	while (*argv)
	{
		i = 0;
		args = ft_split(*argv++, ' ');
		if (!args)
			cleanup(top, NULL, EXIT_FAILURE);
		while (args[i])
		{
			num = ft_atol(args[i++]);
			if (num > INT_MAX || num < INT_MIN)
				cleanup(top, args, EXIT_FAILURE);
			else
				stack_add_back(top, stack_new((int) num));
		}
		cleanup(NULL, args, EXIT_SUCCESS);
	}
}

void	check_duplicates(t_stack **top)
{
	t_stack	*node;

	stack_bubble_sort(*top);
	node = *top;
	while (node->next)
	{
		if (node->number == node->next->number)
			cleanup(top, NULL, EXIT_FAILURE);
		node = node->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	**top;

	if (argc > 1)
	{
		top = ft_calloc(1, sizeof(t_stack *));
		read_args(top, argv + 1);
		check_duplicates(top);
		stack_print(*top);
		cleanup(top, NULL, EXIT_SUCCESS);
	}
}
