#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int *maximum_p(int *values, int n)
{
    int *p_max = values;
    values++;

    for(int i = 1; i < n; ++i) {
        if(*p_max < *values) {
            p_max = values;
        }
        values++;
    }
    return p_max;
}

int *maximum_a(int values[], int n)
{
    int *p_max = values;

    for(int i = 0; i < n; i++) {
        if(values[i] > *p_max) {
            p_max = &values[i];
        }
    }
    return p_max;
}

int main(int argc, char *argv[])
{
    if(argc < 2) {
        printf("Usage %s: <int-1>, <int-2>, ..., <int-n>", argv[0]);
        exit(EXIT_FAILURE);
    }

    else {
        int n = argc - 1;
        int values[n];
        
        //  COPY ARGS INTO ARRAY
        for(int i = 0; i < n; i++) {
            values[i] = atoi(argv[i + 1]);
        }
        
        printf("Max int from array v1 = %i\n", *maximum_a(values, n));
        printf("Max int from array v2 = %i\n", *maximum_p(values, n));

        exit(EXIT_SUCCESS);
    }
    return 0;
}
