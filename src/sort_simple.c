/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:10:36 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/25 22:11:01 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	simple_sort(t_stack *stack)
{
	if ((stack->stack[0] > stack->stack[1])
		&& (stack->stack[0] > stack->stack[2]))
		swap(stack);
	else if ((stack->stack[0] < stack->stack[1])
		&& (stack->stack[0] < stack->stack[2])
		&& (stack->stack[2] > stack->stack[1]))
	{
		rotate(stack);
		swap(stack);
	}
	else if ((stack->stack[0] < stack->stack[1])
		&& (stack->stack[0] < stack->stack[2]))
		reverse_rotate(stack);
	else if ((stack->stack[0] > stack->stack[1])
		&& (stack->stack[0] < stack->stack[2]))
		rotate(stack);
	else
	{
		swap(stack);
		rotate(stack);
	}
}
