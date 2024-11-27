SRCDIR =	./src/
INCLUDES =	./includes/
SRC = $(addprefix $(SRCDIR), ft_printf.c print_utils.c flag_handlers.c flag_handlers2.c)

OBJS = $(SRC:.c=.o)
NAME	= libftprintf.a
CC = gcc
AR = ar
FLAGS = -Wall -Wextra -Werror -g3

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(FLAGS) -I./$(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re