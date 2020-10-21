# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jonasbb <jonasbb@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/24 16:36:29 by jonasbb       #+#    #+#                  #
#    Updated: 2020/08/24 17:21:23 by jonasbb       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = frag

FLAGS = -Wall -Wextra -Werror

SRCS = FragTrap.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
