# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jonasbb <jonasbb@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/26 12:57:02 by jonasbb       #+#    #+#                  #
#    Updated: 2020/08/29 10:27:48 by jbennink      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = wasteland

FLAGS = -Wall -Wextra -Werror

SRCS = AWeapon.cpp Character.cpp Enemy.cpp PlasmaRifle.cpp \
		PowerFist.cpp RadScorpion.cpp SuperMutant.cpp main.cpp \
		Deathclaw.cpp Stick.cpp

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
