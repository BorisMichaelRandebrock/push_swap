/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:50:22 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/04 19:17:30 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	si_exc(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{}

	return (1);
}

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
			if ((ft_isdigit(argv[i][j]) == 0) && !(argv[i][j] == '-'\
					|| argv[i][j] == '+'))
				{
					ft_printf("Error\n");
					return (0);
				}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	check_double(int *argv)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (argv[i])
	{
		while (argv[j] && argv[i] != argv[j])
			j++;
		if (argv[i] == argv[j])
		{
			ft_printf("Error\n");
			return (0);
		}
		i++;
		j = i + 1;

		/*while (argv[i])
		{
			if (argv[i] == argv[j])
			{
				ft_printf("numbers duplicated 🤢");
				return (0);
			}
			j++;
		}
		i++;*/
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
	check_numbers(argv);/*
	*args = ft_atoi(*argv);
i	check_double(args);i*/
	return (0);
}
