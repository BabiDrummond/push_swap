/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:39:15 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/06 19:00:40 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	swap(t_list **head)
{
	void	*temp;

	if (!*head)
		return (1);
	temp = (*head)->content;
	(*head)->content = (*head)->next->content;
	(*head)->next->content = temp;
	return (0);
}

// int main(void)
// {
//     // Test with ints
// 	t_list *head = NULL;
// 	int vals[] = {9, 3, 1, 2, 4};
// 	int i = 0;
//
// 	while (i < 5)
// 		lst_add_back(&head, lst_new(&vals[i++]));
//
// 	ft_printf("Before: ");
// 	lst_iter(head, lst_print_int);
// 	swap(&head);
// 	ft_printf("\nAfter1: ");
// 	lst_iter(head, lst_print_int);
// 	swap(&head);
// 	ft_printf("\nAfter2: ");
// 	lst_iter(head, lst_print_int);
// 	swap(&head);
// 	ft_printf("\nAfter3: ");
// 	lst_iter(head, lst_print_int);
// 	swap(&head);
// 	ft_printf("\nAfter4: ");
// 	lst_iter(head, lst_print_int);
// 	swap(&head);
// 	ft_printf("\nAfter5: ");
// 	lst_iter(head, lst_print_int);
// }