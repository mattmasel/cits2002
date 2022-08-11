#include <stdio.h>
#include <stdlib.h>

/* Simple program to test ackermanns "total computable function"    */
/* accepts two non-negative integers as args                        */

int ackermann(int m, int n)
{
    if(m == 0) {
        return n + 1;
    }
    else if(m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    }
    else(m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main(int argcount, char *argvalue[])
{
    // Check the number of command-line arguments
    if(argcount != 3) {
        fprintf(stderr, "Usage: %s only 2 args accepted!\n", argvalue[0]);
        exit(EXIT_FAILURE);			// Exit indicating failure
    }
    else {
        int m = atoi(argvalue[1]);
        int n = atoi(argvalue[2]);
        
        int result = ackermann(m, n);
        printf("%i\n", result);
    }
    return EXIT_SUCCESS;
}