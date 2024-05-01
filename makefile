# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 13:52:02 by jhorta-c          #+#    #+#              #
#    Updated: 2024/05/02 00:08:15 by jhorta-c         ###   ########.fr        #
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
#TEST = ft_print_stack.c 

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

VAL := valgrind --leak-check=full --show-leak-kinds=all -s --verbose --trace-children=yes

RANDOM_NUMBERS	:= $(shell shuf -i 1-500 -n 500)


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
	@$(RM) random_numbers.txt output.txt push_valgrind_output.txt
	@echo "Cleaning $(NAME)"
	@$(MAKE) -C $(LIBFT_PATH) fclean --no-print-directory
	@echo "$(RED)$@$(RESET) $(NAME) $(GREEN)[OK]$(RESET)"

re: fclean all

test: all
	@echo "/....................................... Testing Push_Swap ........................................\ \n"
	@echo $(RANDOM_NUMBERS) > random_numbers.txt
	@./$(NAME) $$(cat random_numbers.txt) | tee output.txt | wc -l > output.txt
	@echo "-> Number of Operations: $$(head -n 1 output.txt)"
	@echo "-> Valgrind Result:"
	-@$(VAL) ./$(NAME) $$(cat random_numbers.txt) > push_valgrind_output.txt 2>&1
	@grep "total heap usage\|All heap blocks" push_valgrind_output.txt | sed 's/==[0-9]*==/                   /g'
	@echo "\n\........................................Testing_Norminette......................................../\n"
	@norminette
	@echo "\n"
	@$(RM) random_numbers.txt output.txt push_valgrind_output.txt
	@$(MAKE) -s fclean

tester: re
	@echo "\n"
	@curl https://git.homegu.com/raw/hu8813/tester_push_swap/main/pstester.py | python3 -
	


.PHONY: clean fclean re test test_mac v tester

