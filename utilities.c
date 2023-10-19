/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:24:21 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/19 18:39:56 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *lst)
{
	t_number *current = lst->first;
	while (current->next)
	{
		printf("%i\n", current->value);
		current = current->next;
	}
	printf("%i\n", current->value);
	ft_printf("amount of nodes: %i \n",ft_lstsize(lst));
}

t_list	*to_split(char **argv)
{
	int	j;
	char	**args;
	int	*arg;
	t_list	*stack_a;

	j = 1;
	args = NULL;
	arg = NULL;
	stack_a = NULL;
	args = ft_split(argv[1], ' ');
	while (args[j])
		j++;
	arg = err_hunter(j + 1, args);
	stack_a = stack_init(arg, j + 1);
	return (stack_a);
}

t_list	*no_split(int argc, char **argv)
{

	int	i;
	int	j;
	char	**args;
	int	*arg;
	t_list	*stack_a;

	i = 1;
	j = 0;
	args = NULL;
	arg = NULL;
	stack_a = NULL;
	arg = err_hunter(argc,  argv);
	stack_a = stack_init(arg, argc);
	free(args);
	return (stack_a);
}

