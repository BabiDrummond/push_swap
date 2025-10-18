/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:08:03 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 17:35:18 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **top)
{
	t_stack	*temp;

	if (!top || !*top)
		return ;
	temp = *top;
	stack_pop_front(top);
	stack_push_back(top, temp);
	temp->next = NULL;
}

void	ra(t_stacks *stacks)
{
	rotate(stacks->a);
	ft_printf("ra");
}

void	rb(t_stacks *stacks)
{
	rotate(stacks->b);
	ft_printf("rb");
}

void	rr(t_stacks *stacks)
{
	rotate(stacks->a);
	rotate(stacks->b);
	ft_printf("rr");
}

// void	print_list_int(t_list *head)
// {
// 	while(head)
// 	{
// 		printf("%d", *(int *)head->content);
// 		head = head->next;
// 	}
// 	printf("\n");
// }

// int main(void)
// {
//     // Test with ints
// 	t_list *head = NULL;
// 	int vals[] = {9, 3, 1, 2, 4};
// 	int i = 0;

// 	while (i < 5)
// 		lst_add_back(&head, lst_new(&vals[i++]));

// 	printf("Before: ");
// 	print_list_int(head);
// 	rotate(&head);
// 	printf("After1: ");
// 	print_list_int(head);
// 	rotate(&head);
// 	printf("After2: ");
// 	print_list_int(head);
// 	rotate(&head);
// 	printf("After3: ");
// 	print_list_int(head);
// 	rotate(&head);
// 	printf("After4: ");
// 	print_list_int(head);
// 	rotate(&head);
// 	printf("After5: ");
// 	print_list_int(head);
// }