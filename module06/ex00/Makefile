# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/22 16:13:10 by jbennink      #+#    #+#                  #
#    Updated: 2020/09/22 16:13:30 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = conversion

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
