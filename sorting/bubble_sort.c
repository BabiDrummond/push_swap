/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 21:31:08 by bmoreira          #+#    #+#             */
/*   Updated: 2025/09/27 23:44:26 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;
	int	swapped;

	i = -1;
	while (++i < size - 1)
	{
		j = -1;
		swapped = 0;
		while (++j < size - 1)
		{
			if (arr[j] > arr [j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = 1;
			}
		}
		if (!swapped)
			break ;
	}
	return (arr);
}

t_list bubble_sort_list(t_list *head)
{
	t_list	*current;
	t_list	*previous;
	t_list	*next;
	int	size;
	int i;
	
	i = 0;
	size = ft_lstsize(head);
	while (i < size)
	{
		current = head;
		previous = head;
		while (current->next)
		{
			next = current->next;
			if (current->content > next->content)
			{
				if (current == head) // sa ou sb
				{
					current->next = next->next;
					next->next = current;
					previous = next;
					head = previous;
				}
				else // r ou rr e s
				{
					current->next = next->next;
					next->next = current;
					previous->next = next;
					previous = next;
				}
				continue;
			}
			previous = current;
			current = current->next;
		}
	}
}

// int main(void)
// {
// 	int tab[5] = {9, 3, 1, 2, 4};
// 	int size = 5;
// 	int i = 0;
// 	int *res = malloc(5 * sizeof(int));
// 	res = bubble_sort(tab, size);
// 	while (i < size)       
// 		printf("%d", res[i++]);
// }