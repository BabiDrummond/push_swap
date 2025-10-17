/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:39:15 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:09:00 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	swap(t_stack **top)
{
	int	temp;

	if (!*top)
		return (FALSE);
	temp = (*top)->number;
	(*top)->number = (*top)->next->number;
	(*top)->next->number = temp;
	return (TRUE);
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