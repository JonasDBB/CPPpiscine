# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/01 17:32:45 by jbennink      #+#    #+#                  #
#    Updated: 2020/10/01 17:32:59 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = mutantstack

FLAGS = -Wall -Wextra -Werror

SRCS = mutantstack.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
