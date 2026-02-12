# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmelo <mmelo@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2026/02/07 20:21:16 by mmelo         #+#    #+#                  #
#    Updated: 2026/02/10 14:44:02 by mmelo         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CFLAGS = -Wall -Werror -Wextra -I includes
SRC = srcs/ft_atoi.c srcs/operators.c srcs/ft_putstr.c srcs/ft_putnbr.c srcs/do-op.c
OBJECTS = srcs/ft_atoi.o srcs/operators.o srcs/ft_putstr.o srcs/ft_putnbr.o srcs/do-op.o

all: $(NAME)

$(NAME): $(OBJECTS)
	@cc $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.c
	@cc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re