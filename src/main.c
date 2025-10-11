/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:38:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/10 17:00:15 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// void	lst_append(t_list **head, char **args)
// {
// 	t_list	*node;
// 	int		i;

// 	while (*args[i])
// 	{
// 		node = lst_new(*args[i]);
// 	}
// }

// void	parse_args2(char **args)
// {
// 	char	**split;
// 	t_list	**head;

// 	head = malloc(sizeof(t_list **));
// 	while(**args++)
// 	{
// 		//split = malloc(sizeof(char *));
// 		split = ft_split(*args, ' ');
// 		lst_append(head, split);
// 		ft_split_free(split);
// 	}
// }


char	**read_args(int argc, char **args)
{
	char	**split;
	int		i;
	
	i = 0;
	if (argc == 1)
		split = ft_split(*args, ' ');
	else
	{
		split = ft_calloc(argc + 1, sizeof(char *));
		if (!split)
			return (NULL);
		while (i < argc)
			split[i++] = *args++;
	}
	return (split);
}

void	print_list_int(t_list *head)
{
	while(head)
	{
		ft_printf("%d\n", *(int *)head->content);
		head = head->next;
	}
}

int	parse_args(t_list **head, char **args)
{
	long	*num;
	
	while (*args)
	{
		num = malloc(1 * sizeof(long));
		if (!num)
			return (0);
		*num = ft_atol(*args++);
		if (*num > INT_MAX || *num < INT_MIN)
		{
			lst_clear(head, free);
			return (0);
		}
		else
			lst_add_back(head, lst_new(num));
	}
	return (1);
}
// cc -Wall -Wextra -Werror main.c ../libft/src/str/* ../libft/src/mem/* ../libft/src/printf/* ../libft/src/math/* ../libft/src/char/* ../libft/src/lst/* && ./a.out "1 2 aaa   3  4  bada 2147483648" && rm a.out
int	main(int argc, char **argv)
{
	char **args;
	t_list *head = NULL;
	
	if (argc > 1)
	{
		args = read_args(argc - 1, argv + 1);
		parse_args(&head, args);
		print_list_int(head);
	}
}

// Validações
// Verificar se tem apenas inteiros
// Verificar duplicatas
// Verificar MAX/MIN int