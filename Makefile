CC = cc
CFLAGS =  -Wall -Wextra -Werror -I${INCLUDES}
SRCS_DIR = srcs/
INCLUDES = includes/
SRCS =
NAME = cryptx

all : ${NAME}

${NAME} :
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean :
	rm ${NAME}

re : clean all
