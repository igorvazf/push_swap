/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:57:25 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/30 17:12:30 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_position(t_stack *stack_a, int moves, int value)
{
	int	i;

	i = 1;
	if (moves == 1)
		return (stack_a->top);
	while (i <= stack_a->top)
	{
		if (value < stack_a->stack[i - 1] && value > stack_a->stack[i])
			return (i - 1);
		i++;
	}
	return (i - 1);
}

int	get_moves(t_stack *stack_a, int value)
{
	int	moves;
	int	half;
	int	top_a;

	moves = 0;
	half = stack_a->top / 2;
	top_a = stack_a->top;
	if (value < stack_a->stack[top_a] && value > stack_a->stack[0])
		return (1);
	top_a--;
	while (top_a >= half)
	{
		moves++;
		if (value < stack_a->stack[top_a] && value > stack_a->stack[top_a + 1])
			break ;
		top_a--;
	}
	while (top_a < half)
	{
		if (value < stack_a->stack[top_a] && value > stack_a->stack[top_a + 1])
			break ;
		moves--;
		top_a--;
	}
	return (moves + 1);
}

int	find_smaller(t_stack *stack)
{
	int	i;
	int	smaller;

	smaller = stack->stack[0];
	i = 1;
	while (i <= stack->top)
	{
		if (stack->stack[i] < smaller)
			smaller = stack->stack[i];
		i++;
	}
	return (smaller);
}

int	find_higher(t_stack *stack)
{
	int	i;
	int	higher;

	higher = stack->stack[0];
	i = 1;
	while (i <= stack->top)
	{
		if (stack->stack[i] > higher)
			higher = stack->stack[i];
		i++;
	}
	return (higher);
}
