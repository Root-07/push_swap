/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_big_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:30:30 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/13 18:44:14 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sorting_arr(t_stack *stackA)
{
	int	iter;
	int	tmp;

	iter = 0;
	while (iter < stackA->taille - 1)
	{
		if (stackA->r_arr[iter] > stackA->r_arr[iter + 1])
		{
			tmp = stackA->r_arr[iter];
			stackA->r_arr[iter] = stackA->r_arr[iter + 1];
			stackA->r_arr[iter + 1] = tmp;
			iter = 0;
		}
		else
			iter++;
	}
}

void	array_helper(t_stack *stackA)
{
	int	iter;
	int	tmp;

	iter = 0;
	stackA->r_arr = malloc(sizeof(int ) * stackA->taille);
	if (!stackA->r_arr)
		return ;
	while (iter < stackA->taille)
	{
		stackA->r_arr[iter] = stackA->arr[iter];
		iter++;
	}
	ft_sorting_arr(stackA);
}

int	find_indice_maxv(t_stack *stackB)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < stackB->taille)
	{
		if (stackB->arr[i] > stackB->arr[tmp])
			tmp = i;
		i++;
	}
	return (tmp);
}
