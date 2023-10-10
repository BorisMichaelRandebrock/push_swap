/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:50:22 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/10 19:02:25 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_numbers(char **argv)
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
}

void	check_double(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (argv[i])
	{
		while (argv[j])
		{
			if (ft_strncmp(argv[i], argv[j], ft_strlen(argv[i])) == 0)
			{
				ft_printf("Error\n");
				exit(2);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

long	ft_atol(char *argv)
{
	int		i;
	int		sign;
	long long	num;
	
	i = 0;
	sign = 1;
	num = 0;
	while (argv[i])
	{
		while (argv[i] >= 9 && argv[i] <= 13)
			i++;
		if (argv[i] == '-' || argv[i] == '+')
		{
			if (argv[i] == '-')
				sign *= -1;
			i++;
		}
		while (argv[i] >= '0' && argv[i] <= '9')
		{
			num = num * 10 + argv[i] - '0';
			i++;
		}
	}
	return (num * sign);
}

long long	*outer_limits(int argc, char **argv)
{
	int		i;
	long long	*args;

	i = 1;
	args = malloc(sizeof(int) * (argc -1));
	if (!args)
		exit (4);
	while (argv[i])
	{
		args[i - 1] = ft_atol(argv[i]);
		if (args[i - 1] < INT_MIN || args[i - 1] > INT_MAX)
		{
			ft_printf("Error\n");
			exit (3);
		}
		i++;
	}
	ft_printf("%d\n", INT_MAX);
   	ft_printf("%d", INT_MIN);
	return (args);
}

int	*err_hunter(int argc, char **argv)
{
	int	*args;
	int	i;

	i = 0;
	args = NULL;
	check_numbers(argv);
	check_double(argv);
	args = (int *)outer_limits(argc, argv);
	return (args);
}
