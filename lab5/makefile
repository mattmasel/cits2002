# My first makefile to build listints.c

listints : listints.o
		cc -std=c11 -Wall -Werror -o listints listints.o -lm

listints.o : listints.c
		cc -std=c11 -Wall -Werror -c listints.c

clean :
		rm -f *.o listints
