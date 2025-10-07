/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:38:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/06 21:59:50 by bmoreira         ###   ########.fr       */
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

// void	parse_args(char **args)
// {
	
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
// cc -Wall -Wextra -Werror main.c ../libft/src/str/* ../libft/src/mem/* ../libft/src/printf/* ../libft/src/math/* ../libft/src/char/* && ./a.out "1 2 aaa   3  4  bada 2147483648" && rm a.out
int	main(int argc, char **argv)
{
	char **args;
	long num;
	
	if (argc > 1)
	{
		args = read_args(argc - 1, argv + 1);
		//parse_args(args);
		while (*args)
		{
			num = ft_atol(*args++);
			if (num > INT_MAX || num < INT_MIN)
				ft_printf("erro\n");
			else
				ft_printf("%d\n", (int) num);
		}
	}
}

// Validações
// Verificar se tem apenas inteiros
// Verificar duplicatas
// Verificar MAX/MIN intbv 1