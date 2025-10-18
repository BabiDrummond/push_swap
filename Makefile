NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./include/

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS_DIR = src/
SRCS = operations/push.c		\
	operations/reverse_rotate.c \
	operations/rotate.c 		\
	operations/swap.c			\
	stack/stack_bubble_sort.c 	\
	stack/stack_clear.c			\
	stack/stack_dup.c			\
	stack/stack_iter.c			\
	stack/stack_last.c			\
	stack/stack_map.c			\
	stack/stack_new.c			\
	stack/stack_print.c			\
	stack/stack_pop_back.c		\
	stack/stack_pop_front.c		\
	stack/stack_push_back.c		\
	stack/stack_push_front.c	\
	stack/stack_size.c			\
	stack/stacks_free.c			\
	main.c
OBJS_DIR = objs/
OBJS = $(SRCS:%.c=$(OBJS_DIR)%.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) $(OBJS) $(LIBFT) -o $(NAME)
	@echo -n "\033[0;32mGenerated push_swap\n"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	@echo "\033[95mCompiling $(notdir $<)"

$(LIBFT):
	@make --no-print-directory -C $(LIBFT_DIR)

clean:
	@echo "\033[0;34mCleaning push_swap objects"
	@rm -rf $(OBJS_DIR)
	@make --no-print-directory -C $(LIBFT_DIR) clean

fclean: clean
	@echo "\033[0;34mCleaning push_swap"
	@rm -f $(NAME)
	@make --no-print-directory -C $(LIBFT_DIR) fclean

re: fclean all

run: re
	./$(NAME) 384 4 1000 8 3 238 18 2 300 400 500 7

gdb:
	cc -Wall -Wextra -Werror src/main.c src/operations/** src/stack/** libft/src/str/* libft/src/mem/* libft/src/printf/* libft/src/num/* libft/src/char/* -g && gdb ./a.out && rm a.out

valgrind: re
	valgrind ./$(NAME) 384 4 1000 8 3 238 18 2 300 400 500 7

.PHONY: $(LIBFT) clean fclean re