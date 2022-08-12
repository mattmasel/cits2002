#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/* Simple program to print out bytesize of numerical argument   */

/* prints a numbers size in Bytes, KBytes, MBytes, GBytes       */
void get_bytes(char *number)
{
    int len = strlen(number);

    if(len < 4) {
        printf("%cByte\n", number[0]);
    }
    else if (len < 7){
        printf("%cKByte\n", number[0]);
    }
    else if (len < 10){
        printf("%cMByte\n", number[0]);
    }
    else {
        printf("%cGByte\n", number[0]);
    }    
}

int main(int argcount, char *argvalue[])
{
    // Check the number of command-line arguments
    if(argcount < 2) {
        fprintf(stderr, "Usage: %s requires more than 1 arg\n", argvalue[0]);
        exit(EXIT_FAILURE);         // Exit indicating failure
    }
    else {
        for(int i = 1; i < argcount; i++) {
            get_bytes(argvalue[i]);
        }
    }
    return EXIT_SUCCESS;
}
