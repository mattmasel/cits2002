#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/* Write a program that prints out all "Roman numeral" equivalents of the numbers
   between 1 and the single argument supplied to the program.
   Use the rules for writing Roman numerals, and the online calculator, from: 
   Calculator Soup (just for the numerals I, V=5, X=10, L=50, C=100, D, M).            */

int current_roman = 1000;
char numeral[5] = "M";

void roman(int number)
{
    int val = number;
    while(val != 0) {
        int diff = val / current_roman;
        val -= (current_roman * diff);
        for(int i = 0; i < diff; i++) {
            printf("%s", numeral);
        }
        switch(current_roman) {
            case 1000 :
                current_roman = 500;
                strcpy(numeral, "D");
                break;
            case 500 :
                current_roman = 100;
                strcpy(numeral, "C");
                break;
            case 100 :
                current_roman = 50;
                strcpy(numeral, "L");
                break;
            case 50 :
                current_roman = 11;
                strcpy(numeral, "X");
                break;
            case 11 :
                current_roman = 10;
                strcpy(numeral, "XI");
                break;
            case 10 :
                current_roman = 9;
                strcpy(numeral, "IX");
                break;
            case 9 :
                current_roman = 8;
                strcpy(numeral, "VIII");
                break;
            case 8 :
                current_roman = 7;
                strcpy(numeral, "VII");
                break;
            case 7 :
                current_roman = 6;
                strcpy(numeral, "VI");
                break;
            case 6 :
                current_roman = 5;
                strcpy(numeral, "V");
                break;
            case 5 :
                current_roman = 4;
                strcpy(numeral, "IV");
                break;
            case 4 :
                current_roman = 1;
                strcpy(numeral, "I");
                break;
            case 1 :
                current_roman = 1000;
                strcpy(numeral, "M");
                break;
        }
        printf("\n");
    }
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
            int number = atoi(argvalue[i]);
            roman(number);
        }
    }
    return EXIT_SUCCESS;
}
