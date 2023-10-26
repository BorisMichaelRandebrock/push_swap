/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:25:34 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/26 13:21:48 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	free(st_a);
	free(st_b);
	ft_printf("all sorted 😎\n");
	exit (0);
}

void	sort_three(t_list *st_a)
{
	t_number	*number;

	number = st_a->first;
	if (number->value <  number->next->value && number->next->value > \
			number->next->next->value)
	{
	//	printf("1 3 2");
	//	pb(st_a, st_b);
		rra(st_a);
		sa(st_a);
	}
	else if (number->value >  number->next->value && number->next->value > \
			number->next->next->value)
	{
		//sa(st_a);
		sa(st_a);
	//	ra(st_a);
		rra(st_a);
//		print_stack(st_a);
	}
	else if (number->value > number->next->value && number->next->value < \
			number->next->next->value)
		sa(st_a);
}
void	sort_numbers(t_list *st_a, t_list *st_b)
{
	is_sorted(st_a, st_b);
	if (st_a->len == 2)
		sa(st_a);
	if (st_a->len == 3)
	{
		sort_three(st_a);
	}
	print_stack(st_a);
	is_sorted(st_a, st_b);
//	exit(0);
}
