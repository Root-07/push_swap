/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:37:47 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/14 23:20:58 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/* struct the stack */
typedef struct s_stack
{
	int	*arr;
	int	*r_arr;
	int	taille;
	int	top;
}	t_stack;

/* splitting the arguments and filling */

size_t		ft_strlen(const char *str);
char		*ft_strjoin(char *s1, char *s2);
char		**ft_split(char *s, char c);
char		*join_arg(char **argv);
int			*convert(char **split);
long		ft_atoi(const char *str);

/* funcs for checking the errors */

void		check_dup(int *res, int len);
void		check_str(char **str);
int			check_splite(char **splite);
void		prepa_arg(int **res, char ***split, char **str, char *s);
void		error(void);

/* funcs for les instructions */

void		swap_a(t_stack *stackA, char c);
void		swap_b(t_stack *stackB, char c);
void		swap_ss(t_stack *stackA, t_stack *stackB);
void		rotate_a(t_stack *satckA, char c);
void		rotate_b(t_stack *stackB, char c);
void		rotate_r(t_stack *stackA, t_stack *stackB);
void		reverse_rotate_a(t_stack *stackA, char c);
void		reverse_rotate_b(t_stack *stackB, char c);
void		reverse_rotate_r(t_stack *stackA, t_stack *stackB);
void		push_a(t_stack *stackA, t_stack *stackB);
void		push_b(t_stack *stackA, t_stack *stackB);

/* Stack-A */

int			ft_len_stack(char **str);
void		stack_a(t_stack *fill, int *res, int len);
void		ft_init(t_stack *stackA, t_stack *stackB);
int			is_sorted(t_stack *stackA);
int			is_rev_sorted(t_stack *stackA);
void		algo_rev_sorted(t_stack *satckA, t_stack *stackB);

/* Algo range for sortting stackA and helpers for this */

void		two_numbers(t_stack *stackA);
void		three_numbers(t_stack *stackA);
void		four_numbers(t_stack *stackA, t_stack *stackB);
void		five_numbers(t_stack *stackA, t_stack *stackB);
void		array_helper(t_stack *stackA);
void		first_push(t_stack *stackA, t_stack *stackB, int start, int end);
int			find_indice_maxv(t_stack *stackB);
void		last_push(t_stack *stackA, t_stack *stackB);
void		range_execution(t_stack *stackA, t_stack *stackB,
				int start, int end);
void		ft_stack_not_sorted(t_stack *stackA, t_stack *stackB);

/* funcs for freeing */

void		free_split(char **split);
void		free_sa_sb(t_stack *stackA, t_stack *stackB);

#endif
