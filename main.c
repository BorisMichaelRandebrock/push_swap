/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:56:20 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/04 17:12:43 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	if (argc == 1  || (argc == 2 && !argv[1][0]))
		return (1);
	err_hunter(argc, argv);
	return (0);
}
