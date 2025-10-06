/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:08:00 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/06 18:36:58 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse_rotate(t_list **head)
{
	t_list	*last;

	last = lst_last(*head);
	lst_del_back(head, NULL);
	lst_add_front(head, last);
}

// void	print_list_int(t_list *head)
// {
// 	while(head)
// 	{
// 		ft_printf("%d", *(int *)head->content);
// 		head = head->next;
// 	}
// }
//
// void	print_lst_int(void *content)
// {
// 	ft_printf("%d", *(int *)content);
// }
//
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
// 	lst_iter(head, print_lst_int);
// 	reverse_rotate(&head);
// 	ft_printf("\nAfter1: ");
// 	lst_iter(head, print_lst_int);
// 	reverse_rotate(&head);
// 	ft_printf("\nAfter2: ");
// 	lst_iter(head, print_lst_int);
// 	reverse_rotate(&head);
// 	ft_printf("\nAfter3: ");
// 	lst_iter(head, print_lst_int);
// 	reverse_rotate(&head);
// 	ft_printf("\nAfter4: ");
// 	lst_iter(head, print_lst_int);
// 	reverse_rotate(&head);
// 	ft_printf("\nAfter5: ");
// 	print_list_int(head);
// }