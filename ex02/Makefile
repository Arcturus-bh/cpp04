NAME = Brain

SRC = main.cpp \
	  src/Animal.cpp \
	  src/WrongAnimal.cpp \
	  src/Dog.cpp \
	  src/Cat.cpp \
	  src/WrongCat.cpp \
	  src/Brain.cpp \

OBJ = $(SRC:.cpp=.o)

CC = c++
FLAGS =  -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@${CC} $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "Suppression des .o" 

fclean: clean
	@rm -f $(OBJ) $(NAME)
	@echo "Suppression du .a effectuée"

re: fclean all

.PHONY : all clean fclean re