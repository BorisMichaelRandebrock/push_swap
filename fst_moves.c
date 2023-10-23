/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fst_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:53:53 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/23 20:00:09 by brandebr         ###   ########.fr       */
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

void	push(t_list *src, t_list *dst)
{
	int		i;
	t_number	*tmp;
	t_number	*tmp2;

	i = 0;
	tmp = src->first;
	printf("0\n");
	src->first = src->first->next;
	printf("00\n");
	src->first->prev = NULL;
	printf("000\n");
	printf("size = %i\n", ft_lstsize(dst));
	if (dst->len == 0)
	{
		printf("Entramos en b es NULL\n");
		dst->first = tmp;
		dst->first->prev = NULL;
		dst->first->next = NULL;
	}
	else
	{
		printf("Entramos en el else\n");
		tmp2 = dst->first;
		dst->first = tmp;
		tmp2->prev = tmp;
		dst->first->prev = NULL;
		dst->first->next = tmp2;
	}
	dst->len++;
	src->len--;
}
