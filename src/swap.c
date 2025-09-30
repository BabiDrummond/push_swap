/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:39:15 by bmoreira          #+#    #+#             */
/*   Updated: 2025/09/30 03:32:48 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
