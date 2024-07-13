/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 00:42:44 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/13 18:42:17 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	first_push(t_stack *stackA, t_stack *stackB, int start, int end)
{
	int	top;

	while (stackA->taille)
	{
		top = stackA->arr[stackA->top];
		if (top <= stackA->r_arr[start])
		{
			push_b(stackA, stackB);
			rotate_b(stackB, 'b');
			start++;
			end++;
		}
		else if (top > stackA->r_arr[start] && top < stackA->r_arr[end])
		{
			push_b(stackA, stackB);
			start ++;
			end ++;
		}
		else if (top >= stackA->r_arr[end])
			rotate_a(stackA, 'a');
	}
}

void	last_push(t_stack *stackA, t_stack *stackB)
{
	int	i;
	int	max;
	int	tmp;

	while (stackB->taille)
	{
		max = find_indice_maxv(stackB);
		tmp = stackB->arr[max];
		while (stackB->arr[stackB->top] != tmp)
		{
			if (max <= (stackB->taille / 2))
				reverse_rotate_b(stackB, 'b');
			else
				rotate_b(stackB, 'b');
		}
		push_a(stackA, stackB);
	}
}

void	range_execution(t_stack *stackA, t_stack *stackB, int start, int end)
{
	first_push(stackA, stackB, start, end);
	last_push(stackA, stackB);
	free_sa_sb(stackA, stackB);
}
