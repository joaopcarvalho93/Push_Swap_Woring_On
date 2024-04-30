# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 13:52:02 by jhorta-c          #+#    #+#              #
#    Updated: 2024/04/30 23:16:37 by jhorta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#----------------------------LIBFT SOURCE FILES----------------------------------------------------------------------------------------------------
LIBFT_PATH = ./libft

LIBFT_LIB = $(LIBFT_PATH)/libft.a

 

#----------------------------MAINFILES----------------------------------------------------------------------------------------------------

SRC_ALGO = move_a_to_b.c move_b_to_a.c sort_stack.c sort_stacks_a_b.c sort_tree.c stack_ini.c
SRC_MOVES = push.c reverse_rotate.c rotate.c swap.c 
NODES_INI = cost_analysis.c index.c int_node_a.c int_node_b.c set_cheapest.c set_target_node_a.c set_target_node_b.c 
UTILS_ERROR = check_duplicate.c check_systax.c free_errors.c ft_free_stack.c
UTILS_SORT = append_node.c get_cheapest.c is_sorted.c min_top.c nodes_find.c return_cheapest.c stack_len.c to_push.c

SRC = $(addprefix ./algo/, $(SRC_ALGO)) \
			$(addprefix ./moves/, $(SRC_MOVES)) \
			$(addprefix ./nodes_ini/, $(NODES_INI)) \
			$(addprefix ./utils_error/, $(UTILS_ERROR)) \
			$(addprefix ./utils_sort/, $(UTILS_SORT))

SRCOBJ = objects/
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
OBJ = $(addprefix $(SRCOBJ), $(SRC:%.c=%.o))
RM = rm -rf

all: $(NAME)

$(LIBFT_LIB):
		@$(MAKE) -C $(LIBFT_PATH) --no-print-directory


$(NAME): $(OBJ) $(LIBFT_LIB)
		@echo "Creating $(NAME)"
		@$(CC) $(CFLAGS) $(MAIN) $(OBJ) $(LIBFT_LIB) -o $(NAME)
		@echo "$(CYAN)make$(RESET) $@ $(GREEN)[OK]$(RESET)"

$(SRCOBJ)%.o: %.c
		@mkdir -p $(SRCOBJ)
		@mkdir -p $(dir $@)
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(SRCOBJ)
	@$(MAKE) -C $(LIBFT_PATH) clean --no-print-directory
	@echo "$(ORANGE)$@$(RESET)  $(NAME) $(GREEN)[OK]$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "Cleaning $(NAME)"
	@$(MAKE) -C $(LIBFT_PATH) fclean --no-print-directory
	@echo "$(RED)$@$(RESET) $(NAME) $(GREEN)[OK]$(RESET)"

fnorm :
	@$(MAKE) -s fclean
	@python3 -m c_formatter_42 $(SRC) */*h
	norminette $(SRC)

re: fclean all

.PHONY: clean fclean re test test_mac v tester
