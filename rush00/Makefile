# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/10 11:52:30 by qmanamel          #+#    #+#              #
#    Updated: 2018/06/10 15:35:05 by qmanamel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program.
NAME        := ft_retro

# Define all the compiling and linking flags.
CXX         := clang++
CXXFLAGS    := -Wall -Wextra -Werror
LNK         := -lncurses

# Folders
SRC_DIR     = ./src/
INC_DIR     = ./headers/
OBJ_DIR     = ./obj/

# Sources and objects.
SRCS_FILES := Bullet.class.cpp Enemy.class.cpp EnemyHorde.class.cpp \
			Game.class.cpp GameEntity.class.cpp Player.class.cpp \
			Screen.class.cpp Star.class.cpp start.Game.cpp main.cpp
HDRS_FILES := Bullet.class.hpp Enemy.class.hpp EnemyHorde.class.hpp \
			Game.class.hpp GameEntity.class.hpp Player.class.hpp \
			Scenery.class.hpp Screen.class.hpp Star.class.hpp
OBJS_FILES := $(SRCS_FILES:.cpp=.o)

# Formatting variables
LINT       := clang-format -style=Google -i

# Paths
SRCS       := $(addprefix $(SRC_DIR), $(SRCS_FILES))
HDRS       := $(addprefix $(INC_DIR), $(HDRS_FILES))
OBJS       := $(addprefix $(OBJ_DIR), $(OBJS_FILES))

# Compile and create everything.
all: obj $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

# This won't run if the source files don't exist or are not modified.
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $< -I $(INC_DIR)

# Compile the program with the objects.
$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@ $(LNK)

# Rule to format CPP code to Google Style
format:
		$(LINT) $(SRCS)

# Rule to remove all the object files.
clean:
	@rm -rf $(OBJ_DIR)
	@echo "[INFO] Objects removed!"

# Rule to remove everything that has been created by the makefile.
fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

# Rule to re-make everything.
re:     fclean all

# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: all clean fclean format re
