/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:25:34 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/30 14:28:29 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_index(t_list *st)
{
	int		i;

	t_number*	tmp;
	t_number*	tmp2;

	i = 0;
	tmp = st->first;
	while (tmp)
	{
		tmp2 = st->first;
		while (tmp2)
		{
			if (tmp->value > tmp2->value)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->index = i;
		i = 0;
		tmp = tmp->next;
	}
}

int	find_smallest(t_list *st)
{
	int		smallest;
	int		i;
	int 		rtn;
	t_number	*tmp;

	tmp = st->first;
	smallest = tmp->index;
	i = 0;
	rtn = 0;
	while (tmp)
	{
		if (smallest > tmp->index)
		{
			rtn = i;
			smallest = tmp->index;
		}
		i++;
		tmp = tmp->next;
	}
//	printf("smallest is in position: %i\n", rtn);
	return (rtn);
}

int	is_sorted(t_list *st_a, t_list *st_b)
{
	t_number	*num;

	num = st_a->first;
	while (num->next)
	{
		if (num->value > num->next->value)
			return (-1);
		num = num->next;
	}
	free_stack(st_a);
	free_stack(st_b);
//	ft_printf("all sorted 😎\n");
	exit (0);
}

void	sort_three(t_list *st_a)
{
	t_number	*n;

	n = st_a->first;
	if (n->value <  n->next->value && n->next->value > \
			n->next->next->value && n->value < n->next->next->value)
	{
		rra(st_a);
		sa(st_a);
	}
	else if (n->value > n->next->value && n->next->next->value > n->next->value && n->value > n->next->next->value)
		ra(st_a);
	else if (n->value <  n->next->value && n->next->value >\
			n->next->next->value)
		rra(st_a);
	else if (n->value >  n->next->value && n->next->value > \
			n->next->next->value)
	{
		sa(st_a);
		rra(st_a); 
	}
	else if (n->value > n->next->value && n->next->value < \
			n->next->next->value)
		sa(st_a);
//	free(st_a);
}

void	sort_four(t_list *st_a, t_list *st_b)
{
	int	n;

	n = find_smallest(st_a);
	while  (n > 0)
	{
		ra(st_a);
		n--;
	}
	pb(st_a, st_b);
	sort_three(st_a);
	pa(st_b, st_a);
}

void	fabulous_five(t_list *st_a, t_list *st_b)
{
	int	n;
	n = find_smallest(st_a);
	while (n)
	{
		ra(st_a);
		n--;
	}
	pb(st_a, st_b);
	sort_four(st_a, st_b);
	pa(st_b, st_a);
}

void	sort_numbers(t_list *st_a, t_list *st_b)
{
	is_sorted(st_a, st_b);
	find_index(st_a);
	print_stack(st_a);
	if (st_a->len == 2)
		sa(st_a);
	if (st_a->len == 3)
		sort_three(st_a);
	if (st_a->len == 4)
		sort_four(st_a, st_b);
	if (st_a->len == 5)
		fabulous_five(st_a, st_b);
	print_stack(st_a);
	is_sorted(st_a, st_b);
//	free(st_a);
	exit(0);
}
