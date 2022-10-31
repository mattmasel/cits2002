#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool subString(char *haystack, char *needle)
{
    //  if needle larger than haystack it cant be in the stack
    if(strlen(needle) > strlen(haystack)) {
        return false;
    }

    while(haystack) {
        while(needle) {
            if(*haystack == *needle) {
                haystack++;
                needle++;
            }
            if(*needle == '\0') {
                //  IF NEEDLE GETS TO NULL IT MEANS WORD IS FOUND
                return true;
            }
        }
        haystack++;
    }

    return false;
}

int main(int argc, char *argv[])
{
    if(argc != 3) {
        fprintf(stderr, "usage %s <haystack> <needle>\n", argv[0]);
        return 1;
    }

    char *haystack  = argv[1];
    char *needle    = argv[2];

    if(subString(haystack, needle)) {
        printf("needle '%s' found in the haystack '%s'\n", argv[2], argv[1]);
    }
    else {
        printf("needle '%s' not in the haystack '%s'\n", argv[2], argv[1]);
        return 1;
    }
    return 0;
}
