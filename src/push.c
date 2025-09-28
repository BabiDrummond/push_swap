/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:07:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/09/27 16:12:56 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    node_add_front(t_node **lst, t_node *node)
{
	if (!lst || !node)
		return ;
	node->next = *lst;
	*lst = node;
}

void    del_node(t_node *head)
{
	if (!head)
		return ;
	head->key = 0;
	free(head);
}

void	lst_del_front(t_list **head)
{
	t_list *temp;

	if (!head || !*head)
		return ;
	temp = *head;
	*head = (*head)->next;
	free(temp->content);
	free(temp);
}

t_node  *push(t_node *first, t_node *second)
{
	ft_lstadd_front(&first, second);
	lst_del_front(&second);
}

t_list  *push(t_list *first, t_list *second)
{
	ft_lstadd_front(&first, second);
	lst_del_front(&second);
}