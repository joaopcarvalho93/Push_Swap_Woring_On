# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 13:52:02 by jhorta-c          #+#    #+#              #
#    Updated: 2024/04/22 22:27:16 by jhorta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#----------------------------LIBFT SOURCE FILES----------------------------------------------------------------------------------------------------
LIBFT_PATH = ./libft

LIBFT = $(LIBFT_PATH)/libft.a

$(LIBFT):
		@$(MAKE) -c $(LIBFT_PATH) --no-print-directory


#----------------------------MAINFILES----------------------------------------------------------------------------------------------------

SRC = ./push_swap.c \
	./algo/move_a_to_b.c ./algo/move_b_to_a.c ./algo/sort_stack.c ./algo/sort_stacks_a_b.c ./algo/sort_tree.c ./algo/stack_ini.c \
	./moves/push.c ./moves/reverse_rotate.c ./moves/rotate.c ./moves/swap.c \
	./nodes_ini/cost_analysis.c ./nodes_ini/index.c ./nodes_ini/int_node_a.c ./nodes_ini/int_node_b.c ./nodes_ini/set_cheapest.c ./nodes_ini/set_target_node_a.c ./nodes_ini/set_target_node_b.c \
	./utils_error/check_duplicate.c ./utils_error/check_systax.c ./utils_error/free_errors.c ./utils_error/ft_free_stack.c \
	./utils_sort/append_node.c ./utils_sort/get_cheapest.c ./utils_sort/is_sorted.c ./utils_sort/min_top.c ./utils_sort/nodes_find.c ./utils_sort/return_cheapest.c ./utils_sort/stack_len.c 

PUSH_SWAP_LIB = push_swap.a

MAIN = push_swap.c


#----------------------------TESTER AND COLOURS----------------------------------------------------------------------------------------------------

# # Test
# NBRS = numbers.txt
# READ_NBRS = $(shell cat $(NBRS))
# NUM = $(if $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS)),$(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS)),5)
# COMMAND= $(shell seq -999999 999999 | shuf -n $(NUM) > $(NBRS))
# COMMAND_MAC = $(shell jot -r -n $(NUM) -999999 999999 > $(NBRS))
# RUN = ./$(NAME) $(READ_NBRS)
# CHECKER = ./checker_linux $(READ_NBRS)
# CHECKER_MAC = ./checker_mac $(READ_NBRS)

# Colours
GREEN = \033[1;32m
ORANGE = \033[1;33m
RED = \033[1;31m
CYAN = \033[1;36mF
RESET = \033[0m

#----------------------------MAKEFILE RULES COMPILATION----------------------------------------------------------------------------------------------------
NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Werror -g
# COMPRESS = ar rcs
RM = rm -rf

all: $(NAME)

$(NAME): $(SRC)
		@$(MAKE) -sC ./libft
		@echo "Creating $(NAME)"
		@$(CC) $(CFLAGS) $(SRC) $(LIBFT) -o $(NAME)
		@echo "$(CYAN)make$(RESET)   $@ $(GREEN)[OK]$(RESET)"
		

clean:
	@$(MAKE) clean -sC $(LIBFT_PATH)
	@echo "$(ORANGE)$@$(RESET)  $(NAME) $(GREEN)[OK]$(RESET)"

fclean:
	@$(MAKE) fclean -Sc $(LIBFT_PATH)
	@echo "Cleaning $(NAME)"
	@$(RM) $(NAME)
	@echo "$(RED)$@$(RESET) $(NAME) $(GREEN)[OK]$(RESET)"

fnorm :
	@$(MAKE) -s fclean
	@python3 -m c_formatter_42 $(SRC) */*h
	norminette $(SRC)

re: fclean all

# test: re
# 	@$(COMMAND)
# 	@$(RM) $(NBRS)

# v: re
# 	@$(COMMAND)
# 	@echo "\n"
# 	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME) $(READ_NBRS)
# 	$(RM) $(NBRS)

# tester: re
# 	@echo "\n"
# 	@curl https://git.homegu.com/raw/hu8813/tester_push_swap/main/pstester.py | python3 -

# %:
# 	@true

.PHONY: all clean fclean re test test_mac v tester
