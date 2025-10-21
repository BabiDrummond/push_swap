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
	sorting/radix.c				\
	sorting/sort.c				\
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
	stack/stack_search.c		\
	stack/stack_size.c			\
	stack/stacks_free.c			\
	stack/stacks_init.c		 	\
	utils/error_handler.c		\
	utils/is_sorted.c			\
	utils/read_args.c			\
	utils/validate.c			\
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

.PHONY: $(LIBFT) clean fclean re