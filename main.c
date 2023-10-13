/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:56:20 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/13 17:04:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	**args;
	int	*arg;

	i = 1;
	j = 0;
	args = NULL;
	arg = NULL;
	if (argc == 1 )
		return (1);
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		arg = err_hunter(argc, args);
	}
	else 
		arg = err_hunter(argc,  ++argv);
	return (0);
}
