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

//  STRCHR - RETURNS FIRST OCCURANCE OF C
char *strchr(char *s, int c)
{
    while(*s != '\0' && *s != c) {
        s++;
    }
    return s;
}

//  STRRCHR - RETURNS LAST OCCURANCE OF C
char *strrchr(char *s, int c)
{
    char *target = NULL;
    while(*s != '\0') {
        if(*s == c) {
            target = s;
        }
        s++;
    }
    return target;
}

//  STRPBRK - SEARCH STRING FOR AN
char *strpbrk(char *s, char *accept)
{
    char *target = accept;
    while(*s != '\0') {
        while(*target != '\0') {
            if(*s == *target) {
                return s;
            }
            target++;
        }
        target = accept;
        s++;
    }
    return NULL;
}

//  STRSTR - FIND FIRST OCCURANCE OF NEEDLE IN HAYSTACK
char *strstr(char *haystack, char *needle)
{
    char *target = needle;
    char *found = haystack;
    
    while(*haystack != '\0') {
        while(*target != '\0') {
            if(*haystack == *target) {
                found = haystack;
                while(*haystack == *target) {
                    target++;
                    haystack++;
                    if(*target == '\0') {
                        return found;
                    }
                }
            }
            target++;
        }
        target = needle;
        haystack++;
    }

    return NULL;
}