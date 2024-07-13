/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:35:24 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/11 22:44:07 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	swap_a(t_stack *stackA, char c)
{
	int	tmp;

	if (stackA->taille < 2)
		return ;
	tmp = stackA->arr[stackA->top];
	stackA->arr[stackA->top] = stackA->arr[stackA->top - 1];
	stackA->arr[stackA->top - 1] = tmp;
	if (c == 'a')
		write(1, "sa\n", 3);
	else
		return ;
}

void	swap_b(t_stack *stackB, char c)
{
	int	tmp;
	int	i;

	i = 0;
	if (stackB->taille < 2)
		return ;
	tmp = stackB->arr[i];
	stackB->arr[i] = stackB->arr[i + 1];
	stackB->arr[i + 1] = tmp;
	if (c == 'b')
		write(1, "sb\n", 3);
	else
		return ;
}

void	swap_ss(t_stack *stackA, t_stack *stackB)
{
	swap_a(stackA, 's');
	swap_b(stackB, 's');
}
