/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:44:30 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/09 16:18:27 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push_a(t_stack *stackA, t_stack *stackB)
{
	if (stackB->taille <= 0)
		return ;
	stackA->arr[stackA->taille] = stackB->arr[stackB->top];
	stackB->top --;
	stackB->taille --;
	stackA->top ++;
	stackA->taille ++;
	write(1, "pa\n", 3);
}

void	push_b(t_stack *stackA, t_stack *stackB)
{
	if (stackA->taille <= 0)
		return ;
	stackB->arr[stackB->taille] = stackA->arr[stackA->top];
	stackA->top --;
	stackA->taille --;
	stackB->top ++;
	stackB->taille ++;
	write(1, "pb\n", 3);
}
