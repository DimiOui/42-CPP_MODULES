define compiling
	@printf '$(shell tput setaf 69)Compiling$(shell tput sgr0) %s\n' $1
	@$(CC) $(CFLAGS) -c $1 -o $2
endef

define removing
	@printf '$(shell tput setaf 59)Removing$(shell tput sgr0) %s\n' $1
	@$(RM) $1 > /dev/null
endef

SRCS		=	srcs/HumanA.cpp srcs/HumanB.cpp srcs/Weapon.cpp srcs/main.cpp

OBJS		= $(SRCS:.cpp=.o)

INC			= includes/HumanA.hpp includes/HumanB.hpp includes/Weapon.hpp

NAME		= violence

RM			= rm -f

CC			= c++

CFLAGS		=   -std=c++98 -Wall -Wextra -Werror -Iincludes

%.o : %.cpp
			$(call compiling,$<,$(<:.cpp=.o),0)

${NAME}:	$(OBJS) $(INC)
			@printf '$(shell tput setaf 29)Finished Compiling √ %s\n$(shell tput sgr0)' $1
			@printf '$(shell tput setaf 69)Linking objs...\n$(shell tput sgr0)'
			$(CC) $(INCLUDE) -o $(NAME) $(OBJS)
			@printf '$(shell tput setaf 29)Finished linking √ %s\n$(shell tput sgr0)' $1

all:		$(NAME)

clean:
			$(call removing,$(OBJS))

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: re clean fclean
