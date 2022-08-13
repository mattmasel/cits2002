#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/* Write a program that prints out all "Roman numeral" equivalents of any given number, only works up to M */

void roman(char *number)
{
    int num = atoi(number);
    // arrays to hold numerals and their values 
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    // loop over number until it is zero
    for(int i = 0; num != 0; i++) {
        while(num >= val[i]) {
            num -= val[i];
            printf("%s", roman[i]);
        }
    }
    printf("\n");
}

int main(int argcount, char *argvalue[])
{
    // Check the number of command-line arguments
    if(argcount < 2) {
        fprintf(stderr, "Usage: %s requires at least 1 arg\n", argvalue[0]);
        exit(EXIT_FAILURE);         // Exit indicating failure
    }
    else {
        for(int i = 1; i < argcount; i++) {
            roman(argvalue[i]);
        }
    }
    return EXIT_SUCCESS;
}
