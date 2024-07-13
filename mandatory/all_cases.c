/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_cases.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 02:39:05 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/10 02:40:54 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_stack_not_sorted(t_stack *stackA, t_stack *stackB)
{
	if (is_sorted(stackA))
		exit(0);
	if (is_rev_sorted(stackA) && stackA->taille > 5)
		algo_rev_sorted(stackA, stackB);
	else if (stackA->taille == 2)
		two_numbers(stackA);
	else if (stackA->taille == 3)
		three_numbers(stackA);
	else if (stackA->taille == 4)
		four_numbers(stackA, stackB);
	else if (stackA->taille == 5)
		five_numbers(stackA, stackB);
	else if (stackA->taille > 5 && stackA->taille <= 100)
		range_execution(stackA, stackB, 0, 15);
	else
		range_execution(stackA, stackB, 0, 35);
}
