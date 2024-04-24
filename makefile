# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 13:52:02 by jhorta-c          #+#    #+#              #
#    Updated: 2024/04/24 20:07:25 by jhorta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#----------------------------LIBFT SOURCE FILES----------------------------------------------------------------------------------------------------
LIBFT_PATH = ./libft

LIBFT = $(LIBFT_PATH)/libft.a

 $(LIBFT):
# 		@$(MAKE) -c $(LIBFT_PATH) --no-print-directory


#----------------------------MAINFILES----------------------------------------------------------------------------------------------------

SRC = ./push_swap.c \
	./algo/move_a_to_b.c ./algo/move_b_to_a.c ./algo/sort_stack.c ./algo/sort_stacks_a_b.c ./algo/sort_tree.c ./algo/stack_ini.c \
	./moves/push.c ./moves/reverse_rotate.c ./moves/rotate.c ./moves/swap.c \
	./nodes_ini/cost_analysis.c ./nodes_ini/index.c ./nodes_ini/int_node_a.c ./nodes_ini/int_node_b.c ./nodes_ini/set_cheapest.c ./nodes_ini/set_target_node_a.c ./nodes_ini/set_target_node_b.c \
	./utils_error/check_duplicate.c ./utils_error/check_systax.c ./utils_error/free_errors.c ./utils_error/ft_free_stack.c \
	./utils_sort/append_node.c ./utils_sort/get_cheapest.c ./utils_sort/is_sorted.c ./utils_sort/min_top.c ./utils_sort/nodes_find.c ./utils_sort/return_cheapest.c ./utils_sort/stack_len.c 

OBJ_DIR = objects
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))
#----------------------------TESTER AND COLOURS----------------------------------------------------------------------------------------------------

GREEN = \033[1;32m
ORANGE = \033[1;33m
RED = \033[1;31m
CYAN = \033[1;36mF
RESET = \033[0m

#----------------------------MAKEFILE RULES COMPILATION----------------------------------------------------------------------------------------------------
NAME = push_swap
PUSH_SWAP_LIB = push_swap.a
MAIN = push_swap.c
CC = cc
CFLAGS = -Wall -Werror -Werror -g
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(LIBFT)
		@echo "Creating $(NAME)"
		@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
		@echo "$(CYAN)make$(RESET)   $@ $(GREEN)[OK]$(RESET)"

$(OBJ_DIR):
		@mkdir -p $@

$(OBJ_DIR)/%.o: %.C
		@$(CC) $(CFLAGS) -c $< -o $@
		

clean:
	@$(RM) $(OBJ_DIR)
	@$(MAKE) -C $(LIBFT_PATH) clean --no-print-directory
	@echo "$(ORANGE)$@$(RESET)  $(NAME) $(GREEN)[OK]$(RESET)"

fclean:
	@$(RM) $(NAME)
	@echo "Cleaning $(NAME)"
	@$(MAKE) -C $(LIBFT_PATH) fclean --no-print-directory
	@echo "$(RED)$@$(RESET) $(NAME) $(GREEN)[OK]$(RESET)"

fnorm :
	@$(MAKE) -s fclean
	@python3 -m c_formatter_42 $(SRC) */*h
	norminette $(SRC)

re: fclean all

.PHONY: all clean fclean re test test_mac v tester
