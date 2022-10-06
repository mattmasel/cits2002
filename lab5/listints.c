#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int *numbers = NULL;
int n = 0;

void print_numbers(void)
{
    printf("Placeholder for final number array\n");
}

char *find_number(char *)

void extract_numbers(char *str)
{
    char *s = str;
    //int max = -1, length = 0;
    while(*s) {
        if(isdigit(*s)) {
            printf("%c\n", *s);
            s++;
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
    print_numbers();
    exit(EXIT_SUCCESS);

    return 0;
}