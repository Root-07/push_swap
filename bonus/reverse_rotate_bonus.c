/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:39:50 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/11 02:44:44 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	reverse_rotate_a(t_stack *stackA, char c)
{
	int	tmp;
	int	i;

	if (stackA->taille < 2)
		return ;
	i = 0;
	while (i < stackA->taille - 1)
	{
		tmp = stackA->arr[i];
		stackA->arr[i] = stackA->arr[i + 1];
		stackA->arr[i + 1] = tmp;
		i++;
	}
	if (c == 'a')
		write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_stack *stackB, char c)
{
	int	tmp;
	int	i;

	if (stackB->taille < 2)
		return ;
	i = 0;
	while (i < stackB->taille - 1)
	{
		tmp = stackB->arr[i];
		stackB->arr[i] = stackB->arr[i + 1];
		stackB->arr[i + 1] = tmp;
		i++;
	}
	if (c == 'b')
		write(1, "rrb\n", 4);
}

void	reverse_rotate_r(t_stack *stackA, t_stack *stackB)
{
	reverse_rotate_a(stackA, 'r');
	reverse_rotate_b(stackB, 'r');
	write(1, "rrr\n", 4);
}
