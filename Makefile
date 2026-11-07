NAME		= push_swap

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -I . -I $(LIBFT_DIR) -I $(LIBFT_EXT_DIR)

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

LIBFT_EXT_DIR	= libft_ext
LIBFT_EXT		= $(LIBFT_EXT_DIR)/libft_ext.a

SRCS        = ft_bench.c \
	            ft_disorder.c \
	            ft_param.c \
	            ft_parse.c \
	            ft_printf.c \
	            ft_printf_double.c \
	            ft_printf_ptr.c \
	            ft_printf_utilities.c \
	            ft_push.c \
	            ft_reverse_rotate.c \
	            ft_rotate.c \
	            ft_sort.c \
	            ft_stack_size.c \
	            ft_stack_utils.c \
	            ft_strategy.c \
	            ft_swap.c \
	            push_swap.c

OBJS 		= $(SRCS:.c=.o)

all: $(NAME)

# Link step: builds push_swap once every .o, libft_ext.a and libft.a are up to date.
#   $(CC)       cc; without -c it runs the linker instead of only compiling
#   $(CFLAGS)   compile flags
#   $(OBJS)     every .o file made by the %.o rule below
#   $(LIBFT)    libft/libft.a; only the libft functions we call are copied in.
#               It must come after $(OBJS): the linker reads left to right and
#               only takes from a library what earlier files asked for
#   $(LIBFT_EXT) libft_ext/libft_ext.a; extra functions not in libft
#               (ft_strcmp, ft_ws_to_space, ft_free_split). Placed before
#               $(LIBFT) in case its functions ever call libft ones
#   -o $(NAME)  name of the output program (otherwise cc writes a.out)
$(NAME): $(OBJS) $(LIBFT_EXT) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_EXT) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(LIBFT_EXT):
	$(MAKE) -C $(LIBFT_EXT_DIR)

%.o: %.c push_swap.h $(LIBFT_DIR)/libft.h $(LIBFT_EXT_DIR)/libft_ext.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(LIBFT_EXT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(LIBFT_EXT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
