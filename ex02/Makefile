# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hguillau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 05:43:09 by hguillau          #+#    #+#              #
#    Updated: 2024/11/25 14:01:19 by hguillau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET =		a.out

CXX =			c++

CXXFLAGS =		-Wall -Wextra -Werror -I. #-g3 -fsanitize=address

SRCS =			main.cpp			\
				Fixed.cpp			\

OBJS =			$(SRCS:.cpp=.o)

all: 			$(TARGET)

$(TARGET):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
				$(CXX) $(CXXFLAGS) -std=c++98 -c $< -o $@

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f ${TARGET}

re:				fclean all

.PHONY:			all clean fclean re
