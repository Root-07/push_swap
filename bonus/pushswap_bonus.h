/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:37:47 by ael-amin          #+#    #+#             */
/*   Updated: 2023/04/13 22:24:36 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_BONUS_H
# define PUSHSWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

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

char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *s, char c);
char	*join_arg(char **argv);
int		*convert(char **split);
long	ft_atoi(const char *str);

/* funcs for checking the errors */

void	check_dup(int *res, int len);
void	check_str(char **str);
int		check_splite(char **splite);
void	prepa_arg(int **res, char ***split, char **str, char *s);
void	error(void);

/* funcs for les instructions */

void	swap_a(t_stack *stackA, char c);
void	swap_b(t_stack *stackB, char c);
void	swap_ss(t_stack *stackA, t_stack *stackB);
void	rotate_a(t_stack *satckA, char c);
void	rotate_b(t_stack *stackB, char c);
void	rotate_r(t_stack *stackA, t_stack *stackB);
void	reverse_rotate_a(t_stack *stackA, char c);
void	reverse_rotate_b(t_stack *stackB, char c);
void	reverse_rotate_r(t_stack *stackA, t_stack *stackB);
void	push_a(t_stack *stackA, t_stack *stackB);
void	push_b(t_stack *stackA, t_stack *stackB);
char	*get_next_line(int fd);

/* Stack-A */

int		ft_len_stack(char **str);
void	stack_a(t_stack *fill, int *res, int len);
void	ft_init(t_stack *stackA, t_stack *stackB);
int		is_sorted(t_stack *stackA);
void	check_soring(t_stack *stackA, t_stack *stackB);

/* funcs for freeing */

void	free_split(char **split);
void	free_sa_sb(t_stack *stackA, t_stack *stackB);

#endif
