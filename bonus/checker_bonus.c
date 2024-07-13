/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:22:06 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/13 22:32:41 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

static	void	instructions(t_stack *stackA, t_stack *stackB, char *l)
{
	if (ft_strcmp(l, "ra\n") == 0)
		rotate_a(stackA, ' ');
	else if (ft_strcmp(l, "rb\n") == 0)
		rotate_b(stackB, ' ');
	else if (ft_strcmp(l, "rr\n") == 0)
		rotate_r(stackA, stackB);
	else if (ft_strcmp(l, "rra\n") == 0)
		reverse_rotate_a(stackA, ' ');
	else if (ft_strcmp(l, "rrb\n") == 0)
		reverse_rotate_b(stackB, ' ');
	else if (ft_strcmp(l, "rrr\n") == 0)
		reverse_rotate_r(stackA, stackB);
	else if (ft_strcmp(l, "sa\n") == 0)
		swap_a(stackA, ' ');
	else if (ft_strcmp(l, "sb\n") == 0)
		swap_b(stackB, ' ');
	else if (ft_strcmp(l, "ss\n") == 0)
		swap_ss(stackA, stackB);
	else if (ft_strcmp(l, "pa\n") == 0)
		push_a(stackA, stackB);
	else if (ft_strcmp(l, "pb\n") == 0)
		push_b(stackA, stackB);
	else
		error();
}

static	void	execution_instructions(t_stack *stackA, t_stack *stackB)
{
	char	*l;

	while (1)
	{
		l = get_next_line(0);
		if (!l)
			break ;
		instructions(stackA, stackB, l);
		free(l);
	}
}

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
		execution_instructions(&stacka, &stackb);
		check_soring(&stacka, &stackb);
		free_sa_sb(&stacka, &stackb);
	}
	return (0);
}
