# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbennink <jbennink@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/05 16:13:03 by jbennink      #+#    #+#                  #
#    Updated: 2020/08/05 17:51:02 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace

FLAGS = -Wall -Wextra -Werror

SRCS = replace.cpp

ARGS0 = "file0" "this" "that"
ARGS1 = "file1" "34" "xxxx"
ARGS2 = "file2" "hard" "hhard"
ARGS3 = "file3" "wway" "way"

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME) $(ARGS0)
	./$(NAME) $(ARGS1)
	./$(NAME) $(ARGS2)
	./$(NAME) $(ARGS3)
