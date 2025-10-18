/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_bubble_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 00:48:10 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/18 19:07:39 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_bubble_sort(t_stack *stack)
{
	t_stack	*curr;
	int		temp;
	int		size;
	int		swapped;

	if (!stack)
		return ;
	size = stack_size(stack);
	while (size--)
	{
		curr = stack;
		swapped = 0;
		while (curr->next)
		{
			if ((curr->number > curr->next->number) && ++swapped)
			{
				temp = curr->number;
				curr->number = curr->next->number;
				curr->next->number = temp;
			}
			curr = curr->next;
		}
		if (!swapped)
			break ;
	}
}

// void	print_stack_int(t_stack *node)
// {
// 	while(node)
// 	{
// 		printf("%d", *(int *)node->number);
// 		node = node->next;
// 	}
// 	printf("\n");
// }

// void	print_stack_str(t_stack *node)
// {
// 	while(node)
// 	{
// 		printf("%s", (char *)node->number);
// 		node = node->next;
// 	}
// 	printf("\n");
// }

// int main(void)
// {
//  // Test with ints
// 	t_stack *node = NULL;
// 	int vals[] = {9, 3, 1, 2, 4};
// 	int i = 0;

// 	while (i < 5)
// 		lst_add_back(&node, lst_new(&vals[i++]));

// 	printf("Before: ");
// 	print_stack_int(node);
// 	bubble_lst(node, cmp_int);
// 	printf("After: ");
// 	print_stack_int(node);

//  // Test with strings
//  t_stack *node2 = NULL;
//  char *vals2[] = {"c", "b", "a", "e", "f"};
//  int j = 0;

// 	while (j < 5)
// 		lst_add_back(&node2, lst_new(vals2[j++]));

//  printf("Before: ");
// 	print_stack_str(node2);

// 	bubble_lst(node2, cmp_str);

//     printf("After: ");
// 	print_stack_str(node2);
// }