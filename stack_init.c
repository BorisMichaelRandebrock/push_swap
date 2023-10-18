/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:38:42 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/18 14:59:41 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

t_list	*stack_init(int *args)
{
	int	i;
	t_list	*new;
	t_list	*stack_a;
	
	i = 0;
	new = NULL;
	stack_a = NULL;
	while (args[i] != '\0')
	{
		new = ft_lstnew(&args[i]);
		ft_lstadd_back(&stack_a, new);
		i++;
	}
	return (stack_a);
}
