/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fst_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:53:53 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/23 15:56:59 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *stack)
{
	t_number	*temp;
	t_number	*tmp2;

	temp = stack->first;
	tmp2 = stack->first->next;
	tmp2->prev = temp->prev;
	temp->prev = tmp2;
	temp->next = temp->next->next;
	stack->first = tmp2;
	stack->first->next = temp;
}
