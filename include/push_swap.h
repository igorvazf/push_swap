/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:31:42 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/22 21:56:32 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_stack
{
	char	c;
	int		capacity;
	int		top;
	int		*stack;
}	t_stack;

void	init_stack(t_stack *stack, char **argv);
t_stack	*create_stack(int capacity);
int		validate(char **argv);
void	swap(t_stack *stack);
void	push(t_stack *stack_src, t_stack *stack_dst);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	double_swap(t_stack *stack_a, t_stack *stack_b);
void	double_rotate(t_stack *stack_a, t_stack *stack_b);
void	double_reverse_rotate(t_stack *stack_a, t_stack *stack_b);
void	sort(t_stack *stack_a, t_stack *stack_b);

#endif
