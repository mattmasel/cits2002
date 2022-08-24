#include <stdio.h>
#include <stdlib.h>

#include <string.h>


int my_strlen(char s[])
{
	return strlen(s);
} 

int main(int argc, char *argv[])
{
//  ENSURE THAT PROGRAM HAS CORRECT NUMBER OF ARGUMENTS
    if (argc < 2) {
        fprintf(stderr, "Usage: %s argument\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
//  CALL THE PROCESS FUNCTION AND COLLECT THE RESULT
        int strlen = my_strlen(argv[1]);

//  PRINT THE RESULT
        printf("The string length is: %d\n", strlen);

//  TERMINATE PROGRAM, INDICATING SUCCESS
        exit(EXIT_SUCCESS);
    }
    return 0;
}
