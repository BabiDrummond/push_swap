/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:27:47 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/06 18:52:49 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/include/libft.h"

void	push(t_list **head, t_list **node);
void	rotate(t_list **head);
void	reverse_rotate(t_list **head);
void	swap(t_list **head);

#endif