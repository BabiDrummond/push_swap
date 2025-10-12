/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:38:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/12 00:23:50 by bmoreira         ###   ########.fr       */
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
	if (!split || !*split)
		return (FALSE);
	while (i < argc)
		split[i++] = *args++;
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

// cc -Wall -Wextra -Werror main.c ../libft/src/str/* ../libft/src/mem/* ../libft/src/printf/* ../libft/src/math/* ../libft/src/char/* ../libft/src/lst/* && ./a.out "1 2 aaa   3  4  bada 2147483648" && rm a.out
int	main(int argc, char **argv)
{
	char **args;
	t_list **head;
	
	if (argc > 1)
	{
		head = ft_calloc(1, sizeof(t_list *));
		args = read_args(argc - 1, argv + 1);
		if (!args)
			return (exit_cleanup(NULL, NULL, EXIT_FAILURE));
		if (!parse_args(head, args))
			return (exit_cleanup(head, args, EXIT_FAILURE));
		bubble_lst(*head, cmp_int);
		lst_print_int(*head);
		return (exit_cleanup(head, args, EXIT_SUCCESS));
	}
}

// Validações
// Verificar duplicatas