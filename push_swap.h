/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:17:55 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/23 19:56:25 by brandebr         ###   ########.fr       */
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
void	print_stack(t_list *lst);
t_list	*to_split(char **argv);
t_list	*no_split(int argc, char **argv);
t_list	*stack_b_init(void);
void	check_numbers(char **argv);
void	swap(t_list *stack);
void	push(t_list *src, t_list *dst);

#endif
