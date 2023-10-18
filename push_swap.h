/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:17:55 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/18 20:10:30 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
/*
typedef struct	s_list
{
	int	value;
	int	index;
	struct s_list	*next;
}	t_list;
*/
int     main(int argc, char **argv);
int	*err_hunter(int argc, char **argv);
t_list	*stack_init(int *args, int argc);
long	ft_atol(char *argv);
#endif
