NAME = zombie

CFLAGS = -std=c++98 -Wall -Wextra -Werror

COM = c++

FILES = main.cpp Zombie.cpp zombieHorde.cpp

all :
	$(COM) $(CFLAGS) $(FILES) -o $(NAME) -fsanitize=address -g3

clean :
	rm $(NAME)