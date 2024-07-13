/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:54:23 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/11 22:46:13 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	rotate_a(t_stack *stackA, char c)
{
	int	tmp;
	int	i;

	if (stackA->taille < 2)
		return ;
	i = stackA->taille - 1;
	while (i)
	{
		tmp = stackA->arr[i];
		stackA->arr[i] = stackA->arr[i - 1];
		stackA->arr[i - 1] = tmp;
		i--;
	}
	if (c == 'a')
		write(1, "ra\n", 3);
}

void	rotate_b(t_stack *stackB, char c)
{
	int	tmp;
	int	i;

	if (stackB->taille < 2)
		return ;
	i = stackB->taille - 1;
	while (i)
	{
		tmp = stackB->arr[i];
		stackB->arr[i] = stackB->arr[i - 1];
		stackB->arr[i - 1] = tmp;
		i --;
	}
	if (c == 'b')
		write(1, "rb\n", 3);
}

void	rotate_r(t_stack *stackA, t_stack *stackB)
{
	rotate_a(stackA, 'r');
	rotate_b(stackB, 'r');
}
