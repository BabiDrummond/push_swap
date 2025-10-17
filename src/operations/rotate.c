/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:08:03 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:08:56 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	rotate(t_stack **top)
{
	t_stack	*temp;

	if (!*top)
		return (FALSE);
	temp = *top;
	stack_del_front(top);
	stack_add_back(top, temp);
	temp->next = NULL;
	return (TRUE);
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