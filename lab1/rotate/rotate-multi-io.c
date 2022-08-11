#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Compile this program with:
// cc -std=c11 -Wall -Werror -o rotate rotate.c

int ROT = 13;

//  The rotate function returns the character ROT positions further along the
//  alphabetic character sequence 

char rotate(char c)
{
    if(isupper(c)) {
        return ('A' + (c - 'A' + ROT) % 26);
    }
    else {
        return ('a' + (c - 'a' + ROT) % 26);
    }
}

// Check if argument is a file 
int isfile(char *arg, int length)
{
    int start = length; 
    if(arg[start-1] == 't' && arg[start-2] == 'x' && arg[start-3] == 't' && arg[start-4] == '.') {
        return 1;
    }
    return 0;
}

//  Execution of the whole program begins at the main function

int main(int argcount, char *argvalue[])
{
    // Exit with an error if the number of arguments (including
    // the name of the executable) is not precisely 2
    if(argcount == 0) {
        fprintf(stderr, "%s: program expected at least one argument, but instead received %d\n",
                    argvalue[0], argcount-1);
        exit(EXIT_FAILURE);
    }
    // Main procedure
    else {
        // Define variables for a later nested loop
        int i, j;

        // Loop for every character in the text
	    for(i = 1; i < argcount; i++) {		    
            int length = strlen(argvalue[i]);

            // check if arg is a txt file
            if(isfile(argvalue[i], length)) {
                // Define variable for file
                FILE *fp;
                int c;
                fp = fopen(argvalue[i], "r");

                while(1) {
                    c = fgetc(fp);
                    if(feof(fp)) {break;}
                    if(c == ' ') {printf(" ");}
                    else {
                        printf("%c", rotate(c));
                    }
                }
                printf(" ");
                fclose(fp);
            }

            // Checks if first char is a digit, if false it is a word
            // and will encode
            else if(isdigit(argvalue[i][0])) {   
                ROT = atoi(argvalue[i]);	    
		    }

            // If a digit is found is is converted to an int and set to ROT amount
            else {
                for(j = 0; j < length; j++) {
                    // Determine and print the ciphered character
            	    printf("%c", rotate(argvalue[i][j]));
                }
                // Space between words
                printf(" ");
            }
        }

        // Print one final new-line character
        printf("\n");

        // Exit indicating success
        exit(EXIT_SUCCESS);
    }
    return 0;
}