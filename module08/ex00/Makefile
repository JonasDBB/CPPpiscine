# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/29 14:58:28 by jbennink      #+#    #+#                  #
#    Updated: 2020/09/29 14:58:38 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
