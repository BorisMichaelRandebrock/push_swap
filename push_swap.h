/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:17:55 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/24 19:20:13 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

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
void	rotate(t_list *st);
void	reverse_rotate(t_list *st);
void	sa(t_list *st_a);
void	sb(t_list *st_b);
void	ss(t_list *st_a, t_list *st_b);
void	pa(t_list *st_b, t_list *st_a);
void	pb(t_list *st_a, t_list *st_b);

#endif
