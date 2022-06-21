NAME = push_swap

CC = cc

CFLAGS = -WALL -WEXTRA -WERROR -g

LIBFT = inc/libft

SRC		= push_swap.c \ 
	push_swap_utils.c 

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
		-make -C $(LIBFT)
		@echo " [ .. ] | Compiling libft.."
		$(CC) $(CFLAGS) $^ -o $@
		@echo "[ ok ] | Libft is ready"

%o = %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I inc/libft

clean : rm -f $(OBJ)
	make -C $(LIBFT) clean

fclean : rm -f $(NAME)
	make -C $(LIBFT) fclean

re : fclean all
