/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:27:47 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/15 23:28:19 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"

# define TRUE 1
# define FALSE 0

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

int	push(t_stack **top, t_stack **node);
int	rotate(t_stack **top);
int	reverse_rotate(t_stack **top);
int	swap(t_stack **top);

#endif