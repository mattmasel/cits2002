#include <stdio.h>
#include <stdlib.h>

void get_tree(char *number)
{
    int rows = atoi(number);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(int argcount, char *argvalue[])
{
    // Check the number of command-line arguments
    if(argcount != 2) {
        fprintf(stderr, "Usage: %s only 1 arg accepted!\n", argvalue[0]);
        exit(EXIT_FAILURE);			// Exit indicating failure
    }
    else {
        get_tree(argvalue[1]);
    }
    return EXIT_SUCCESS;
}