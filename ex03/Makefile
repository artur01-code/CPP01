NAME	= Weapon
SRCS	= main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:
			${CC} ${SRCS} ${FLAGS} -o ${NAME} 

leaks:
			leaks --atExit -- ./${NAME}

fclean:	
			rm -f ${NAME}

re:			fclean all

.PHONY:		re fclean all