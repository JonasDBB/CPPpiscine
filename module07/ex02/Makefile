# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/29 09:09:23 by jbennink      #+#    #+#                  #
#    Updated: 2020/09/29 13:11:30 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = array

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
