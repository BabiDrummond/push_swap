/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:39:15 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 17:35:21 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **top)
{
	int	temp;

	if (!top || !*top)
		return ;
	temp = (*top)->number;
	(*top)->number = (*top)->next->number;
	(*top)->next->number = temp;
}

void	sa(t_stacks *stacks)
{
	swap(stacks->a);
	ft_printf("sa");
}

void	sb(t_stacks *stacks)
{
	swap(stacks->b);
	ft_printf("sb");
}

void	ss(t_stacks *stacks)
{
	swap(stacks->a);
	swap(stacks->b);
	ft_printf("ss");
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