/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:07:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 17:35:10 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **top, t_stack **node)
{
	t_stack	*temp;

	if (!top || !node || !*node)
		return ;
	temp = *node;
	stack_pop_front(node);
	stack_push_front(top, temp);
}

void	pa(t_stacks *stacks)
{
	push(stacks->a, stacks->b);
	ft_printf("pa\n");
}

void	pb(t_stacks *stacks)
{
	push(stacks->b, stacks->a);
	ft_printf("pb\n");
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
//
// int main(void)
// {
//     // Test with ints
// 	t_list *head_a = NULL;
// 	t_list *head_b = NULL;
// 	int vals[] = {9, 3, 1, 2, 4};
// 	int vals2[] = {8, 3, 1, 2, 4};
// 	int i = 0;
//
// 	while (i < 5)
// 		lst_add_back(&head_a, lst_new(&vals[i++]));
// 	i = 0;
// 	while (i < 5)
// 		lst_add_back(&head_b, lst_new(&vals2[i++]));
//
// 	printf("Before: ");
// 	print_list_int(head_a);
// 	print_list_int(head_b);
// 	push(&head_a, &head_b);
// 	printf("After1: ");
// 	print_list_int(head_a);
// 	print_list_int(head_b);
// 	push(&head_a, &head_b);
// 	printf("After2: ");
// 	print_list_int(head_a);
// 	print_list_int(head_b);
// 	push(&head_a, &head_b);
// 	printf("After3: ");
// 	print_list_int(head_a);
// 	print_list_int(head_b);
// 	push(&head_a, &head_b);
// 	printf("After4: ");
// 	print_list_int(head_a);
// 	print_list_int(head_b);
// 	push(&head_a, &head_b);
// 	printf("After5: ");
// 	print_list_int(head_a);
// 	print_list_int(head_b);
// }