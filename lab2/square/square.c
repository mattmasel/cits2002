#include <stdio.h>
#include <stdlib.h>

//  Compile with:  cc -std=c11 -Wall -Werror -o square square.c

void square(int number)
{
    printf("The square of %i is %i\n", number, number*number);
}

int main(int argcount, char *argvalue[])
{
    // Check the number of command-line arguments
    if(argcount < 2) {
        fprintf(stderr, "Usage: %s value1 [value2 ...]\n", argvalue[0]);
        exit(EXIT_FAILURE);			// Exit indicating failure
    }
    else {
        // Loop over each argument passed to the program
        for(int a = 1 ; a < argcount ; a = a+1) {
            int n = atoi(argvalue[a]);		// Convert the a'th argument

            square(n);				// Call our function
        }
    }
    return EXIT_SUCCESS;
}
