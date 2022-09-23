char *strcat_a(char dest[], char src[])
{
    char *combo = dest;
    int d = 0, s = 0;

    while(dest[d] != '\0') {
        d++;
    }

    while(src[s] != '\0') {
        dest[d] = src[s];
        d++;
        s++;
    }

    dest[d] = '\0';
    
    return combo;
}

// int strcmp_a(char dest[], char src[])
// {
//     return 0;
// }