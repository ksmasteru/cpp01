NAME =  BraiiiiiiiinnzzzZ

SRC = main.cpp Zombie.cpp zombieHorde.cpp

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
