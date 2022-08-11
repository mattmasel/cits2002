#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Check if a credit card number is valid against random sequences of digits 
 * Uses the Luhn algorithm: 
 * 1. right to left
 * 2. sum 1st, 3rd, 5th, etc odd numbers = s1
 * 3. double the 2nd, 4th, 6th, etc, then sum digits in number and add to s2
 * 4. if s1 + s2 ends with a zero, then credit card is valid
*/

// uses luhn algorithm to check creditcard validity
void isvalid(int length, char *number)
{
    int s1, s2 = 0;

    for(int i = length -1; i > -1; i--) {
        if((i + 1) % 2 == 0) {
            int doubled = (number[i] - '0') * 2;
            char temp[2];
            // convert doubled number to string to split
            sprintf(temp, "%i",  doubled);
            int len = strlen(temp);
            
            for(int i = 0; i < len; i++) {
                s2 += temp[i] - '0';
            }
        }
        else {
            int current = number[i] - '0';
            s1 += current;
        }
    }
    printf("%i\n", s1 + s2);
    if((s1 + s2) % 10 == 0) {
        printf("%s\tVALID\n", number);
    }
    else {
        printf("%s\tNOT VALID\n", number);
    }
}

int main(int argc, char *argv[])
{
    if(argc < 2) {
        fprintf(stderr, "Usage %s: Requires at least 1 argument", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
        for(int i = 1; i < argc; i++) {
            isvalid(strlen(argv[i]), argv[i]);
        }
    }
    return EXIT_SUCCESS;
}