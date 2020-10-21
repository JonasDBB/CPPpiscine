# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 11:45:37 by jbennink      #+#    #+#                  #
#    Updated: 2020/07/27 13:14:53 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAGS = -Wall -Wextra -Werror

SRCS = phonebook.cpp Contact.class.cpp Phonebook.class.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
