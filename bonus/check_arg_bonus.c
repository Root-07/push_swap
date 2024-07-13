/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:52:46 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/11 22:47:26 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	ft_skip(char **str, int i)
{
	int	j;

	j = 0;
	while (str[i][j])
	{
		while (str[i][j] == ' ')
			j++;
		if (ft_strlen(str[i] + j) == 0)
			error();
		while (str[i][j])
		{
			if ((str[i][j] >= '0' && str[i][j] <= '9')
				|| str[i][j] == ' ' || str[i][j] == '+' || str[i][j] == '-')
				j++;
			else
				error();
		}
	}
}

void	check_str(char **str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (ft_strlen(str[i]) == 0)
			error();
		ft_skip(str, i);
		i++;
	}
}

int	check_splite(char **splite)
{
	int	i;
	int	j;

	i = 0;
	while (splite[i])
	{
		j = 0;
		while (splite[i][j] == ' ')
			j++;
		if (splite[i][j] == '+' || splite[i][j] == '-')
			j++;
		if (ft_strlen(splite[i] + j) == 0)
			return (1);
		while (splite[i][j])
		{
			if (splite[i][j] < '0' || splite[i][j] > '9')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	check_dup(int *res, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (res[i] == res[j])
			{
				free(res);
				error();
			}
			j++;
		}
		i++;
	}
}
