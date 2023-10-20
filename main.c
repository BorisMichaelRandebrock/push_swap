/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:56:20 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/20 11:00:01 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
/*	int	i;
	int	j;
	char	**args;
	int	*arg;
*/	t_list	*stack_a;
	//	t_list	*stack_b;
/*
	i = 1;
	j = 0;
	args = NULL;
	arg = NULL;*/
	stack_a = NULL;
	if (argc == 1 )
		return (1);
	if (argc == 2)
	{
		check_numbers(argv);
	//	check_numbers(argv[1]);
		stack_a = to_split(argv);
	}
/*	{
		args = ft_split(argv[1], ' ');
		while (args[j])
			j++;
		arg = err_hunter(j + 1, args);
		stack_a = stack_init(arg, j + 1);
	}
*/	else
	{
		check_numbers(argv);
		stack_a = no_split(argc, ++argv);
	}
/*
	{
		arg = err_hunter(argc,  ++argv);
		stack_a = stack_init(arg, argc);
		free(args);
	}
*/	//i = 0;
	print_stack(stack_a);
//	free(arg);
	return (0);
}
