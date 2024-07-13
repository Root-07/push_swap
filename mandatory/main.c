/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:22:06 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/14 21:55:07 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char *argv[])
{
	char	*str;
	char	**split;
	int		*res;
	t_stack	stacka;
	t_stack	stackb;

	ft_init(&stacka, &stackb);
	if (argc > 1)
	{
		prepa_arg(&res, &split, argv, str);
		stack_a(&stacka, res, ft_len_stack(split));
		free(res);
		free_split(split);
		stackb.arr = malloc(sizeof(int ) * stacka.taille);
		if (!stackb.arr)
			return (0);
		array_helper(&stacka);
		ft_stack_not_sorted(&stacka, &stackb);
		last_push(&stacka, &stackb);
	}
}
