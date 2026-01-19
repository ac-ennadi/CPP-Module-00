CC = c++
FlAGGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJ = $(src:.cpp=.o)
NAME = My_Program

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FlAGGS) -C $<  -o $@