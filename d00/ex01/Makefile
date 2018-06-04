#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: qmanamel <marvin@42.fr>                    +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2018/06/03 16:02:36 by qmanamel          #+#    #+#             *#
#*   Updated: 2018/06/03 16:02:40 by qmanamel         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME     := phonebook

SRCS     := Contact.class.cpp addContact.cpp searchContact.cpp main.cpp
HDRS     := Contact.class.hpp
OBJS     := $(SRCS:.cpp=.o)

CXX      := g++
CXXFLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "(NAME) removed!"

re:     fclean all

