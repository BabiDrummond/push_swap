/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:38:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/21 01:53:01 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc <= 1)
		exit (EXIT_SUCCESS);
	stacks_init(&stacks);
	read_args(&stacks, argv + 1);
	validate(&stacks);
	stack_print(*stacks.a);
	sort(&stacks);
	stack_print(*stacks.a);
	stacks_free(&stacks);
}
