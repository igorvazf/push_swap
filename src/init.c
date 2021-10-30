/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:31:02 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/30 17:10:29 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*create_stack(int capacity, char c)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->capacity = capacity;
	stack->top = -1;
	stack->stack = malloc(capacity * sizeof(int));
	stack->c = c;
	return (stack);
}

void	init_stack(t_stack *stack, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = stack->capacity - 1;
	while (j >= 0)
	{
		stack->stack[j] = ft_atoi(argv[i]);
		stack->top++;
		i++;
		j--;
	}
}
