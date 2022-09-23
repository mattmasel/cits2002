char *strcat_p(char *dest, char *src)
{
    char        *orig   = dest;

    while(*dest != '\0') {
        ++dest;
    }
    while(*src != '\0') {
        *dest   = *src;
        ++dest;
        ++src;
    }
    *dest  = '\0';

    return orig;
}