NAME	= push_swap

CC		= cc
CFLAGS	= -Wall -Wextra

SRCS	= push_swap.c \
		  ft_parse.c \
		  ft_split_ws.c \
		  ft_stack_utils.c \
		  ft_swap.c \
		  ft_push.c \
		  ft_rotate.c \
		  ft_reverse_rotate.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
