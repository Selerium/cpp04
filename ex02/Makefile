# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 18:23:29 by jadithya          #+#    #+#              #
#    Updated: 2023/11/06 18:18:41 by jadithya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OS := ${shell uname}

CC := c++

NAME := Animals

CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -Wshadow -g3

SRCS := Animal.class.cpp\
		Dog.class.cpp\
		Cat.class.cpp\
		WrongAnimal.class.cpp\
		WrongCat.class.cpp\
		Brain.class.cpp\
		main.cpp\

OBJS := $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	@echo "Mandatory:"
	@python3 -m norminette

.PHONY: all bonus clean fclean re norm