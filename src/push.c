/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:07:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/06 19:01:30 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	push(t_list **head, t_list **node)
{
	t_list	*temp;

	if (!*head || !*node)
		return (1);
	temp = *node;
	lst_del_front(node, NULL);
	lst_add_front(head, temp);
	return (0);
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