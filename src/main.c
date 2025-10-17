/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:38:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 20:40:07 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_stacks(t_stacks *stacks)
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

void	error_handler(t_stacks *stacks, char **args)
{
	if (stacks)
		free_stacks(stacks);
	if (args)
		ft_split_free(args);
	ft_printf("Error\n");
	exit (EXIT_FAILURE);
}

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
				stack_add_back(stacks->a, stack_new((int) num));
		}
		ft_split_free(args);
	}
}

void	check_duplicates(t_stacks *stacks)
{
	t_stack	*node;

	stack_bubble_sort(*stacks->a);
	node = *stacks->a;
	while (node->next)
	{
		if (node->number == node->next->number)
			error_handler(stacks, NULL);
		node = node->next;
	}
}

void	init_stacks(t_stacks *stacks)
{	
	stacks->a = ft_calloc(1, sizeof(t_stack *));
	stacks->b = ft_calloc(1, sizeof(t_stack *));
	if (!stacks->a || !stacks->b)
		error_handler(stacks, NULL);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc <= 1)
		exit (EXIT_SUCCESS);
	init_stacks(&stacks);
	read_args(&stacks, argv + 1);
	check_duplicates(&stacks);
	stack_print(*stacks.a);
	free_stacks(&stacks);
}
