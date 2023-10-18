/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:56:20 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/18 20:11:35 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	**args;
	int	*arg;
	t_list	*stack_a;
//	t_list	*stack_b;

	i = 1;
	j = 0;
	args = NULL;
	arg = NULL;
	stack_a = NULL;
	if (argc == 1 )
		return (1);
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		while (args[j])
			j++;
		arg = err_hunter(j, args);
	}
	else 
		arg = err_hunter(argc,  ++argv);
	stack_a = stack_init(arg, argc);
//	ft_printf("amount of nodes: %i \n",ft_lstsize(lst));
	i = 0;
/*	while (stack_a)
 	{
		ft_printf("%i\n", *(int *)stack_a->content);
		stack_a = stack_a->next;
    	}*/
	return (0);
}
