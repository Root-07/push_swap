/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:36:46 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/09 01:12:09 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_len_stack(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
			i++;
	return (i);
}

void	stack_a(t_stack *fill, int *res, int len)
{
	int	i;
	int	k;

	i = len - 1;
	k = 0;
	fill->arr = malloc(sizeof(int ) * len);
	if (!fill->arr)
		return ;
	while (i >= 0)
	{
		fill->arr[k] = res[i];
		fill->top++;
		fill->taille++;
		i--;
		++k;
	}
}

int	is_sorted(t_stack *stackA)
{
	int	i;

	i = stackA->taille - 1;
	while (i > 0)
	{
		if (!(stackA->arr[i] < stackA->arr[i - 1]))
			return (0);
		--i;
	}
	return (1);
}

int	is_rev_sorted(t_stack *stackA)
{
	int	i;

	i = stackA->taille - 1;
	while (i > 0)
	{
		if (!(stackA->arr[i] > stackA->arr[i - 1]))
			return (0);
		--i;
	}
	return (1);
}

void	algo_rev_sorted(t_stack *stackA, t_stack *stackB)
{
	while (stackA->taille)
		push_b(stackA, stackB);
	while (stackB->taille)
	{
		push_a(stackA, stackB);
		rotate_a(stackA, 'a');
	}
}
