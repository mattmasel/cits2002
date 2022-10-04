//  HEADER FOR POINTER VERSION OF MYSTRING.H
#include <stdio.h>
#include <stdlib.h>

//  STRLEN
int strlen_p(char *pstr)
{
    char *s = pstr;
    while(*s != '\0') {
        ++s;
    }
    return s - pstr;
}

//  STRCAT
char *strcat_p(char *dest, char *src)
{
    int dest_len    = strlen_p(dest);
    int count       = 0;
    while(*src != '\0') {
        dest[dest_len + count] = *src;
        src++;
        count++;
    }
    dest[dest_len + count] = '\0';

    return dest;
}

//  STRCMP
int strcmp_p(char *s1, char *s2)
{
    while(*s1 != '\0') {
            s1++;
            s2++;
    }
    return *s2 - *s1;
}

//  STRNCMP
int strncmp_p(char *s1, char *s2, size_t n)
{
    while(n > 0 && *s1 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
        n--;
    }
    return *s2 - *s1;
}

char *strchr(char *str, int c)
{
    return str;
}