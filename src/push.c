/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:07:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/02 16:40:34 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_a(t_list *a, t_list *b)
{
	if (!b)
		return ;
	ft_lstadd_front(&a, b);
	lst_del_front(&b, NULL);
	ft_printf("pa");
}

void	push_b(t_list *a, t_list *b)
{
	if (!a)
		return ;
	ft_lstadd_front(&b, a);
	lst_del_front(&a, NULL);
	ft_printf("pb");
}
