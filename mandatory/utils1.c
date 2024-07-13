/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:23:19 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/10 23:09:35 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		while (i < len && s[start] != '\0')
			p[i++] = s[start++];
		p[i] = '\0';
	}
	else
		p[0] = '\0';
	return (p);
}

static int	ft_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
			j++;
		while (s[j] && s[j] == c)
			j++;
		i++;
	}
	return (i);
}

static int	ft_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char *s, char c)
{
	char	**ptr;
	int		len;
	int		j;

	if (!s)
		return (0);
	len = ft_count(s, c);
	ptr = (char **)malloc((len + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	j = 0;
	while (*s && j < len)
	{
		while (*s && *s == c)
			s ++;
		if (*s && *s != c)
			ptr[j++] = ft_substr(s, 0, ft_len(s, c));
		while (*s && *s != c)
			s ++;
	}
	ptr[j] = NULL;
	return (ptr);
}
