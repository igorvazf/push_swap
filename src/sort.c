/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:55:38 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/25 22:34:01 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_b;
	if (is_sorted(stack_a))
		return ;
	if (stack_a->capacity == 2)
		swap(stack_a);
	else if (stack_a->capacity == 3)
		simple_sort(stack_a);
//	else
//		complex_sort(stack_a, stack_b);
}
