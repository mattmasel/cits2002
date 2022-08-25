#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// DETERMINE IF s1 < = >  s2 LEXICO or ALPHANUM
// RETURN -1 IF s1 < s2, 0 if s1 = s2, 1 if s1 > s2
int my_strcmp(char s1[], char s2[])
{
    return -1;
}

// MUST HAVE AT LEAST 2: UPPERCASE & LOWERCASE & DIGIT
bool is_safe(char s[])
{
    int upper, lower, digit;
    
    for(int i = 0; i < strlen(s); i++) {
        
        if(isupper(s[i])) {
            upper++;
        }
        else if(islower(s[i])) {
            lower++;
        }
        else if(isdigit(s[i])) {
            digit++;
        }
    }

	return upper >= 2 && lower >= 2 && digit >= 2;
}

int my_strlen(char s[])
{
	return strlen(s);
} 

int main(int argc, char *argv[])
{
//  ENSURE THAT PROGRAM HAS CORRECT NUMBER OF ARGUMENTS
    if (argc < 2) {
        fprintf(stderr, "Usage: %s argument\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
//  CALL THE PROCESS FUNCTION AND COLLECT THE RESULT
//  Q1, Q2, Q3, ..., Qn
        int strlen = my_strlen(argv[1]);
		bool issafe = is_safe(argv[1]);

//  PRINT THE RESULT
        printf("The string length is: %d\n", strlen);
		printf("%s\n", issafe ? "Strong password" : "Weak password");

//  TERMINATE PROGRAM, INDICATING SUCCESS
        exit(EXIT_SUCCESS);
    }
    return 0;
}
