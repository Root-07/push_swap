# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 15:32:36 by ael-amin          #+#    #+#              #
#    Updated: 2023/04/14 22:18:25 by ael-amin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

SRC =  	mandatory/main.c mandatory/utils1.c mandatory/check_arg.c mandatory/reverse_rotate.c mandatory/rotate.c mandatory/swap.c  \
 		mandatory/emplier.c mandatory/push.c mandatory/error.c mandatory/join.c mandatory/small_range.c mandatory/stack_sorted.c \
		mandatory/all_cases.c mandatory/free_stacks.c mandatory/initialisation.c mandatory/big_range.c mandatory/support_big_range.c \

SRC_BONUS = bonus/checker_bonus.c bonus/get_next_line_bonus.c bonus/utils1_bonus.c bonus/check_arg_bonus.c bonus/reverse_rotate_bonus.c bonus/rotate_bonus.c bonus/swap_bonus.c  \
 		bonus/emplier_bonus.c bonus/push_bonus.c bonus/error_bonus.c bonus/join_bonus.c  bonus/stack_sorted_bonus.c \
		bonus/free_stacks_bonus.c bonus/initialisation_bonus.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

flags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(flags) $(OBJ) -o $(NAME)
	@echo -----Compiled Mandatory part-----

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJ_BONUS)
	@gcc $(flags) $(OBJ_BONUS) -o $(NAME_BONUS)
	@echo -----Compiled Bonus part-----

%.o: %.c mandatory/pushswap.h
	@gcc -c $< -o $@
	@echo -----Compiling Objects fils-----

clean:
	@rm -rf $(OBJ) $(OBJ_BONUS)
	@echo -----Deleting Objects files-----

fclean: clean
	@rm -rf $(NAME) $(NAME_BONUS)
	@echo -----Deleting Output files-----

re: fclean all


