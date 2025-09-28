/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:39:15 by bmoreira          #+#    #+#             */
/*   Updated: 2025/09/27 16:04:27 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*swap(t_node *head)
{
	int	temp;

	if (!head || !head->next)
		return (head);
	temp = head->key;
	head->key = head->next->key;
	head->next->key = temp;
	return (head);
}

t_list	*swap(t_list *head)
{
	void	*temp;

	if (!head || !head->next)
		return (head);
	temp = head->content;
	head->content = head->next->content;
	head->next->content = temp;
	return (head);
}
