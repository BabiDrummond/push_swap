/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:38:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/16 00:24:37 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	cleanup(t_stack **top, char **args, int code)
{
	if (top)
	{
		stack_clear(top, free);
		free(top);
	}
	if (args)
		ft_split_free(args);
	if (code == EXIT_FAILURE && ft_printf("Error\n"))
		exit (EXIT_FAILURE);
}

// char	**read_args1(int argc, char **args)
// {
// 	char	**split;
// 	int		i;
	
// 	i = 0;
// 	if (argc == 1)
// 		return (ft_split(*args, ' '));
// 	else
// 		split = ft_calloc(argc + 1, sizeof(char *));
// 	if (!split)
// 		return (FALSE);
// 	while (i < argc)
// 		split[i++] = ft_strdup(*args++);
// 	return (split);
// }

// int	parse_args1(t_stack **top, char **args)
// {
// 	long	*num;
// 	int		i;
	
// 	i = 0;
// 	while (args[i])
// 	{
// 		num = ft_calloc(1, sizeof(long));
// 		if (!num)
// 			return (FALSE);
// 		*num = ft_atol(args[i++]);
// 		if (*num > INT_MAX || *num < INT_MIN)
// 			return (free(num), FALSE);
// 		else
// 			stack_add_back(top, stack_new(*(int *)num));
// 	}
// 	return (TRUE);
// }

// void	read_args2(t_stack **top, char **argv)
// {
// 	while (*argv)
// 		parse2(top, ft_split(*argv++, ' '));
// }

// void	parse_args2(t_stack **top, char **args)
// {
// 	long num;
// 	int i;

// 	i = 0;
// 	if (!args)
// 		cleanup(top, args, EXIT_FAILURE);
// 	while (args[i])
// 	{
// 		num = ft_atol(args[i++]);
// 		if (num > INT_MAX || num < INT_MIN)
// 			cleanup(top, args, EXIT_FAILURE);
// 		else
// 			stack_add_back(top, stack_new(*(int *)num));
// 	}
// 	cleanup(NULL, args, EXIT_SUCCESS);
// }

void	read_args(t_stack **top, char **argv)
{
	char **args;
	long num;
	int i;

	i = 0;
	while (*argv)
	{
		args = ft_split(*argv++, ' ');
		if (!args)
			cleanup(top, NULL, EXIT_FAILURE);
		while (args[i])
		{
			num = ft_atol(args[i++]);
			if (num > INT_MAX || num < INT_MIN)
				cleanup(top, args, EXIT_FAILURE);
			else
				stack_add_back(top, stack_new(*(int *)num));
		}
		free(args);
		args = NULL;
		//cleanup(NULL, args, EXIT_SUCCESS);
	}
}

int	check_duplicates(t_stack *top)
{
	stack_bubble_sort(top);
	while (top->next)
	{
		if (top->number == top->next->number)
			return (FALSE);
		top = top->next;
	}
	return (TRUE);
}

int	main(int argc, char **argv)
{
	t_stack **top;
	
	if (argc > 1)
	{
		top = ft_calloc(1, sizeof(t_stack *));
		read_args(top, argv + 1);
		// if (!check_duplicates(top) && ft_printf("Duplicated args\n"))
		// 	return (exit_cleanup(top, args, EXIT_FAILURE));
		stack_print(*top);
	}
}
