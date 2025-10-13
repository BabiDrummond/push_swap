/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:38:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/12 21:24:36 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	exit_cleanup(t_list **lst, char **args, int exit_type)
{
	if (lst)
	{
		lst_clear(lst, free);
		free(lst);
	}
	if (args)
		ft_split_free(args);
	if (exit_type == EXIT_FAILURE)
		ft_printf("Error\n");
	return (exit_type);
}

char	**read_args(int argc, char **args)
{
	char	**split;
	int		i;
	
	i = 0;
	if (argc == 1)
		return (ft_split(*args, ' '));
	else
		split = ft_calloc(argc + 1, sizeof(char *));
	if (!split)
		return (FALSE);
	while (i < argc)
		split[i++] = ft_strdup(*args++);
	return (split);
}

int	parse_args(t_list **head, char **args)
{
	long	*num;
	int		i;
	
	i = 0;
	while (args[i])
	{
		num = ft_calloc(1, sizeof(long));
		if (!num)
			return (FALSE);
		*num = ft_atol(args[i++]);
		if (*num > INT_MAX || *num < INT_MIN)
			return (free(num), FALSE);
		else
			lst_add_back(head, lst_new(num));
	}
	return (TRUE);
}

int	isequal_int(void *a, void *b)
{
	return (*(int *)a == *(int *)b);
}

int	check_duplicates(t_list *head)
{
	bubble_lst(head, cmp_int);
	while (head->next)
	{
		if (isequal_int(head->content, head->next->content))
			return (FALSE);
		head = head->next;
	}
	return (TRUE);
}

int	main(int argc, char **argv)
{
	char **args;
	t_list **head;
	
	if (argc > 1)
	{
		head = ft_calloc(1, sizeof(t_list *));
		args = read_args(argc - 1, argv + 1);
		if (!args && ft_printf("Error reading args\n"))
			return (exit_cleanup(NULL, NULL, EXIT_FAILURE));
		if (!parse_args(head, args) && ft_printf("Error parsing args\n"))
			return (exit_cleanup(head, args, EXIT_FAILURE));
		if (!check_duplicates(*head) && ft_printf("Duplicated args\n"))
			return (exit_cleanup(head, args, EXIT_FAILURE));
		lst_print_int(*head);
		return (exit_cleanup(head, args, EXIT_SUCCESS));
	}
}

// Validações
// Verificar duplicatas