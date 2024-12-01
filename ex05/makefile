NAME = HARL_2.0

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf  $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
