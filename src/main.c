/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:38:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/19 00:48:07 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void    radix(t_stacks *stacks)
// {	
// }

int	main(int argc, char **argv)
{
	#include <stdio.h>
	t_stacks	stacks;

	if (argc <= 1)
		exit (EXIT_SUCCESS);
	stacks_init(&stacks);
	read_args(&stacks, argv + 1);
	ft_printf("original: \n");
	stack_print(*stacks.a);
	validate(&stacks);
	ft_printf("after index: \n");
	stack_print(*stacks.a);
	stacks_free(&stacks);
}

// 1000000000
// 0000101100
// 