/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emplier.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:59:57 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/13 18:23:42 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static char	ft_spaces(char c)
{
	if (c == ' ' || c == '\t' || c == '\v'
		|| c == '\r' || c == '\f' || c == '\n')
		return (1);
	return (0);
}

long	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_spaces(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	if (((res * sign) >= INT_MIN) && ((res * sign) <= INT_MAX))
		res = res * sign;
	else
		error();
	return (res);
}

void	one_arg(char **str)
{
	int	k;

	k = 0;
	while (str[k])
		k++;
	if (k == 1)
		exit(0);
}

int	*convert(char **split)
{
	int		i;
	int		*res;

	one_arg(split);
	if (check_splite(split))
	{
		free_split(split);
		error();
	}
	i = 0;
	i = ft_len_stack(split);
	res = malloc(sizeof(int ) * i);
	if (!res)
		return (0);
	i--;
	while (i >= 0)
	{
		res[i] = ft_atoi(split[i]);
		i--;
	}
	return (res);
}
