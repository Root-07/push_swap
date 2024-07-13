/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:36:00 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/13 18:40:15 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	two_numbers(t_stack *stackA)
{
	int	top;
	int	btm;

	top = stackA->arr[1];
	btm = stackA->arr[0];
	if (top > btm)
		swap_a(stackA, 'a');
	else
		return ;
}

void	three_numbers(t_stack *stackA)
{
	int	top;
	int	mdl;
	int	btm;

	top = stackA->arr[2];
	mdl = stackA->arr[1];
	btm = stackA->arr[0];
	if (mdl < top && mdl < btm && top < btm)
		swap_a(stackA, 'a');
	else if (top > mdl && top > btm && mdl > btm)
	{
		swap_a(stackA, 'a');
		reverse_rotate_a(stackA, 'a');
	}
	else if (top > mdl && top > btm && mdl < btm)
		rotate_a(stackA, 'a');
	else if (top < mdl && top < btm && mdl > btm)
	{
		swap_a(stackA, 'a');
		rotate_a(stackA, 'a');
	}
	else if (top < mdl && top > btm && mdl > btm)
		reverse_rotate_a(stackA, 'a');
	else
		return ;
}

int	ft_min(t_stack *stackA, int *min)
{
	int	iter;
	int	index;

	*min = stackA->arr[0];
	iter = 0;
	index = 0;
	while (iter < stackA->taille)
	{
		if (*min > stackA->arr[iter])
		{
			*min = stackA->arr[iter];
			index = iter;
		}
		++iter;
	}
	return (index);
}

void	four_numbers(t_stack *stackA, t_stack *stackB)
{
	int	min;
	int	iter;
	int	index;

	iter = 0;
	index = 0;
	index = ft_min(stackA, &min);
	while (stackA->arr[stackA->top] != min)
	{
		if (index < 2)
			reverse_rotate_a(stackA, 'a');
		else
			rotate_a(stackA, 'a');
	}
	push_b(stackA, stackB);
	three_numbers(stackA);
	push_a(stackA, stackB);
}

void	five_numbers(t_stack *stackA, t_stack *stackB)
{
	int	iter;
	int	min;
	int	index;

	iter = 0;
	index = ft_min(stackA, &min);
	while (stackA->arr[stackA->top] != min)
	{
		if (index < 2)
			reverse_rotate_a(stackA, 'a');
		else
			rotate_a(stackA, 'a');
	}
	push_b(stackA, stackB);
	four_numbers(stackA, stackB);
	push_a(stackA, stackB);
}
