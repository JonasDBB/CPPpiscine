# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/28 11:35:46 by jbennink      #+#    #+#                  #
#    Updated: 2020/09/28 11:58:01 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = identify

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
