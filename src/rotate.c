/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:08:03 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/02 16:58:19 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	rotate(t_list **head)
{
	t_list *new_tail;
	t_list *next;
	
	new_tail = *head;
	next = (*head)->next;
	lst_del_front(head, NULL);
	ft_lstadd_back(head, new_tail);
	next = NULL;
	*head = next;
}

void	print_list_int(t_list *head)
{
	while(head)
	{
		printf("%d", *(int *)head->content);
		head = head->next;
	}
	printf("\n");
}

int main(void)
{
    // Test with ints
	t_list *head = NULL;
	int vals[] = {9, 3, 1, 2, 4};
	int i = 0;

	while (i < 5)
		ft_lstadd_back(&head, ft_lstnew(&vals[i++]));

	printf("Before: ");
	print_list_int(head);
	rotate(&head);
	printf("After: ");
	print_list_int(head);
}