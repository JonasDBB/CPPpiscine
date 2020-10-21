# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/28 09:01:49 by jbennink      #+#    #+#                  #
#    Updated: 2020/09/28 09:03:03 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = serialize

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
