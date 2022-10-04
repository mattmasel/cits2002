#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void extract_file(char *file)
{
    ;
}

int main (int argc, char *argv[])
{
    if(argc != 2) {
        printf("Usage: %s <filepath>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
        char *file = argv[1];
        extract_file(file);
        exit(EXIT_SUCCESS);
    }
    return 0;
}