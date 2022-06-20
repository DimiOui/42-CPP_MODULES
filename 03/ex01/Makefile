NAME			= ScavTrap

SRCS			= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS			= $(SRCS:.cpp=.o)

RM				= rm -f
CC				= c++
CFLAGS			=  -std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

.PHONY:			all clean fclean re
