/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:31:42 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/22 10:35:38 by igvaz-fe         ###   ########.fr       */
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
	int	capacity;
	int	top;
	int	*stack;
}	t_stack;

void	init_stack(t_stack *stack, char **argv);
t_stack	*create_stack(int capacity);
int		validate(char **argv);

#endif
