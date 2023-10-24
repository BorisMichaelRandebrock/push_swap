/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fst_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:53:53 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/24 16:58:52 by brandebr         ###   ########.fr       */
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
	src->first = src->first->next;
	src->first->prev = NULL;
	printf("size = %i\n", ft_lstsize(dst));
	if (dst->len == 0)
	{
		dst->first = tmp;
		dst->first->prev = NULL;
		dst->first->next = NULL;
	}
	else
	{
		tmp2 = dst->first;
		dst->first = tmp;
		tmp2->prev = tmp;
		dst->first->prev = NULL;
		dst->first->next = tmp2;
	}
	dst->len++;
	src->len--;
}

void	rotate(t_list *st)
{
	t_number	*tmp;
	t_number	*tmp2;
	t_number	*tmp3;

	tmp = st->first;
	tmp3 = st->first->next;
	tmp3->prev = NULL;
	tmp2 = ft_lstlast(st);
	tmp2->next = tmp; 
	tmp->prev = tmp2;
	tmp->next = NULL;
	st->first = tmp3;
}
void delete(void *content)
{
	content = NULL;
}

void	reverse_rotate(t_list *st)
{
	t_number	*tmp1;
	t_number	*tmp3;

	tmp3 = ft_lstlast(st);
	tmp1 = st->first;
	st->first = tmp3;
	st->first->next = tmp1;
	tmp1->prev = st->first;
	tmp3 = tmp3->prev;
	st->first->prev = NULL;
	tmp3->next = NULL;
}
