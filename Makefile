##
## Makefile for  in /home/merran_g/work/fun/MyTek.cpp
## 
## Made by Geoffrey Merran
## Login   <merran_g@epitech.net>
## 
## Started on  Thu Jan 22 12:41:18 2015 Geoffrey Merran
## Last update Thu Jan 22 12:45:09 2015 Geoffrey Merran
##

CC		= g++
CXXFLAGS	+= -W -Wall -Wextra -Werror -g3

RM		= rm -f

NAME		= tek

TEK_DIR		= Src/Teks

SRC		= Src/main.cpp \
		$(TEK_DIR)/Tek.cpp \
		$(TEK_DIR)/Merran_g.cpp \

OBJ		= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)
clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
