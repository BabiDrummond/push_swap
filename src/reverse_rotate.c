/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:08:00 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 01:59:49 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	reverse_rotate(t_stack **top)
{
	t_stack	*last;

	if (!*top)
		return (FALSE);
	last = stack_last(*top);
	stack_del_back(top);
	stack_add_front(top, last);
	return (TRUE);
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