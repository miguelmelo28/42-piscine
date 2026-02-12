# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmelo <mmelo@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2026/02/07 20:21:16 by mmelo         #+#    #+#                  #
#    Updated: 2026/02/10 16:35:00 by mmelo         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CFLAGS = -Wall -Werror -Wextra -I includes
SRC = srcs/ft_putstr.c srcs/ft_display_file.c
OBJECTS = srcs/ft_putstr.o srcs/ft_display_file.o

all: $(NAME)

$(NAME): $(OBJECTS)
	cc $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re