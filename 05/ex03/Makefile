S			= srcs/
O			= objs/
I			= includes/
D			= deps/

NAME			= Bureaucrat
SRCS			= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
					ShrubberyCreationForm.cpp RobotomyRequestForm.cpp Intern.cpp

SRCS			:= $(foreach file,$(SRCS),$S$(file))
OBJS			= $(SRCS:$S%=$O%.o)
DEPS			= $(SRCS:$S%=$D%.d)

RM				= /bin/rm -rf
CC				= c++
CFLAGS			=  -std=c++98 -Wall -Wextra -Werror -I$I

all:			$(NAME)

$O:
				@mkdir $@

$(OBJS):		| $O

$(OBJS):		$O%.o: $S%
				@echo "$(shell tput setaf 69)Compiling $^: $(shell tput sgr0)"
				@$(CC) $(CFLAGS) -c $< -o $@
				@echo "$(shell tput setaf 29)✓$(shell tput sgr0)"

$D:
				@mkdir $@

$(DEPS): 		| $D

$(DEPS):		$D%.d: $S%
				@$(CC) $(CFLAGS) -MM -MF $@ -MT "$O$*.o $@" $<

$(NAME):		$(OBJS)
				@echo "$(shell tput setaf 29)Assembling $(NAME)$(shell tput sgr0)"
				@$(CC) $(LDFLAGS) $^ -o $@

clean:
				$(RM) $D $O *_shrubbery

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re

include $(DEPS)
