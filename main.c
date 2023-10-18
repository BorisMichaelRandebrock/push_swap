/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:56:20 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/18 13:56:53 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
/*	i = 0;
	while (arg[i])
	{

		ft_printf("%i \n", arg[i]);
		i++;
	}*/
	stack_init(arg);
	return (0);
}
