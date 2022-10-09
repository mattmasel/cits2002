#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int numbers[1000];
int n = 0;

void print_list(void)
{
    for(int i = 1; numbers[i] != 0; i++) {
        printf("%i\n", numbers[i]);
    }
}

char *next_number(char *str)
{
    if(*str == ',') {
        return ++str;
    }
    return str;
}

void extract_numbers(char *str)
{
    char *s = str;

    while(*s) {
        if(isdigit(*s)) {
            int number = *s - 48;
            numbers[number] = number;
            s++;
        }
        else {
            s = next_number(s);

        }
    }
    
}

int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("Usage: %s <10,5-100,8-10>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    extract_numbers(argv[1]);
    print_list();
    exit(EXIT_SUCCESS);

    return 0;
}