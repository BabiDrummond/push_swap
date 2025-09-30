/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:07:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/09/30 03:15:57 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*push(t_node *first, t_node *second)
{
	ft_lstadd_front(&first, second);
	lst_del_front(&second, free);
}

void	*push_a(t_list *a, t_list *b)
{
	ft_lstadd_front(&a, b);
	lst_del_front(&b, free);
}

void	*push_b(t_list *a, t_list *b)
{
	ft_lstadd_front(&b, a);
	lst_del_front(&a, free);
}
