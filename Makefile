NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./include/ -I$(LIBFT_DIR)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS_DIR = src/
SRCS = push.c			\
	reverse_rotate.c 	\
	rotate.c 			\
	swap.c				\
	main.c
OBJS_DIR = objs/
OBJS = $(SRCS:%.c=$(OBJS_DIR)%.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(OBJS) $(LIBFT) $(INCLUDES) -o $(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	rm -rf $(OBJS_DIR)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

run: re
	./$(NAME)

.PHONY: $(LIBFT) clean fclean re