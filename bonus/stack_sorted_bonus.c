/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:36:46 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/13 22:19:49 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

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

void	check_soring(t_stack *stackA, t_stack *stackB)
{
	if (is_sorted(stackA) && stackB->taille == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
