NAME	=	ex03

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror

CLASS_F	= 	HumanA.cpp HumanB.cpp Weapon.cpp

CLASS_H	=	${CLASS_F:.cpp=.hpp}

SRCS	=	main.cpp ${CLASS_F}

OBJS	=	${SRCS:.cpp=.o}



all		:	${NAME}

${NAME}	:	${OBJS}
			${CC} ${FLAGS} -o ${NAME} ${OBJS}

%.o		:	%.cpp %.hpp
			${CC} ${FLAGS} -c $< -o $@

clean	:
			rm -f ${OBJS}

fclean	:	clean
			rm -f ${NAME}

re		:	fclean all
