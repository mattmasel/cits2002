#include "mystring.h"

int main (int argc, char *argv[])
{
    if(argc != 3) {
        printf("Usage: %s <str1> <str2>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {      
        char *str1  = argv[1];
        char *str2  = argv[2];
        printf("%s\n", str1);
        printf("strlen_p:   %i\n", strlen_p(str1));
        puts("");
        printf("%s\n", str2);
        printf("strlen_p:   %i\n", strlen_p(str2));
        puts("");
        //printf("strcat_p:   %s\n", strcat_p(str2, str1));
        //printf("strcmp:     %d\n", strcmp_p(str1, str2));
        printf("strncmp:    %d\n", strncmp_p(str1, str2, 3));

        exit(EXIT_SUCCESS);
    }
    return 0;
}