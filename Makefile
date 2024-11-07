CC = cc
CFLAGS =  -Wall -Wextra -Werror -I${INCLUDES}
SRCS_DIR = srcs/
INCLUDES = includes/
SRCS = ${SRCS_DIR}utils/*.c ${SRCS_DIR}main.c ${SRCS_DIR}cesar.c ${SRCS_DIR}vigenere.c
NAME = cryptx

all : ${NAME}

${NAME} :
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean :
	rm ${NAME}

re : clean all
