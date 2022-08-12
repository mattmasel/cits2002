#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/* Write a program that prints out all "Roman numeral" equivalents of the numbers
   between 1 and the single argument supplied to the program.
   Use the rules for writing Roman numerals, and the online calculator, from: 
   Calculator Soup (just for the numerals I, V, X, L, C, D, and M).               */


int main(int argcount, char *argvalue[])
{
    // Check the number of command-line arguments
    if(argcount < 2) {
        fprintf(stderr, "Usage: %s requires more than 1 arg\n", argvalue[0]);
        exit(EXIT_FAILURE);         // Exit indicating failure
    }
    else {
        for(int i = 1; i < argcount; i++) {
            //TODO Roman Numerals
        }
    }
    return EXIT_SUCCESS;
}
