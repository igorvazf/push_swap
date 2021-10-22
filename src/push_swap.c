/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:30:52 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/22 10:43:09 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	if (!validate(argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	stack_a = create_stack(argc - 1);
	stack_b = create_stack(argc - 1);
	init_stack(stack_a, argv);
	return (0);
}
