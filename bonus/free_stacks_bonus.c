/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:49:11 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/11 02:44:15 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	free_sa_sb(t_stack *stackA, t_stack *stackB)
{
	free(stackA->arr);
	free(stackB->arr);
}

void	free_split(char **split)
{
	int	h;

	h = 0;
	while (split[h] != NULL)
	{
		free(split[h]);
		h++;
	}
	free(split);
}
