#include <stdio.h>
#include <stdlib.h>

/* Generate tree as follows:

       *
      ***
     *****
    *******
   *********
*/

void get_tree(char *number)
{
    int rows = atoi(number);

    // find range of j loop
    int cols = (rows * 2) - 1;
    // find midpoint of pyramid 
    int mid = (cols / 2) + 1;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols + 1; j++) {
            if(j < mid - i || j > mid + i) {
                printf(" ");
            }
            else {
                printf("*");
            }
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