/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 23:31:47 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/11 02:44:26 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	ft_init(t_stack *stackA, t_stack *stackB)
{
	stackA->top = -1;
	stackA->taille = 0;
	stackB->top = -1;
	stackB->taille = 0;
}

void	prepa_arg(int **res, char ***split, char **str, char *s)
{
	check_str(str);
	s = join_arg(str);
	*split = ft_split(s, ' ');
	free(s);
	*res = convert(*split);
	check_dup(*res, ft_len_stack(*split));
}
