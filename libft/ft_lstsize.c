/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:19:13 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/19 10:56:51 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_number	*tmp;
	int	len;

	tmp = lst->first;
	len = 0;
	while (tmp)
	{
		len++;
		tmp = tmp -> next;
	}
	return (len);
}
/* lst[len]; is same as lst = lst -> next;*/
/*
#include <stdio.h>

int	main(void)
{
	t_list *l;
	int actual;
	int expected;

	l = ft_lstnew(ft_strdup("1"));
	l->next = ft_lstnew(ft_strdup("2"));
	l->next->next = ft_lstnew(ft_strdup("3"));
	expected = 3;
	actual = ft_lstsize(l);
	printf("%d %d", expected, actual);
	return (0);
}
*/
