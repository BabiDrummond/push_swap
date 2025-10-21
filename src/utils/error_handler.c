/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:35:39 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/21 01:08:17 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_handler(t_stacks *stacks, char **args, int exit_code)
{
	if (stacks)
		stacks_free(stacks);
	if (args)
		ft_split_free(args);
	if (exit_code == EXIT_FAILURE)
		ft_printf("Error\n");
	exit (exit_code);
}
