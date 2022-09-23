#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrays.h"

int main (int argc, char *argv[])
{
    if(argc != 3) {
        printf("Error args arrays.c\n");
        exit(EXIT_FAILURE);
    }
    else {      
        char *dest = argv[1];
        char *src  = argv[2];
        printf("dest        =  %s\n", dest);
        printf("src         =  %s\n", src);
        char ass[40] = "ass";
        char poo[60] = "poop";
        //printf("strcat_a    =  %s\n", strcat_a(argv[1], argv[2]));
        printf("strcat_a    =  %s\n", strcat_p(dest, src));
        printf("strcat_a    =  %s\n", strcat_p(dest, ass));
        printf("strcat_a    =  %s\n", strcat_p(poo, ass));
        printf("strcat_a    =  %s\n", strcat_p(ass, poo));
        printf("strcat_a    =  %s\n", strcat_p(dest, poo));
        printf("strcat_a    =  %s\n", strcat_p(ass, poo));

        exit(EXIT_SUCCESS);
    }
    return 0;
}