/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:50:22 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/05 14:10:16 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_numbers(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			while  (ft_isdigit(argv[i][j]) == 1)
					j++;
				if (argv[i][j] && ft_isdigit(argv[i][j]) == 0)
				{
					ft_printf("Error\n");
					exit(1);
				}
		}
		i++;
		j = 0;
	}
	return (1);
}

int	check_double(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (argv[i])
	{
		while (argv[j])
		{
			if (strncmp(argv[i], argv[j], ft_strlen(argv[i])) == 0)
			{
				ft_printf("Error\n");
				exit(2);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	err_hunter(int argc, char **argv)
{
	int	*args;
	int	i;
	(void)argc;

	i = 0;
	args = NULL;
	check_numbers(argv);
	check_double(argv);
	return (0);
}
