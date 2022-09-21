#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int *maximum_a(int values[], int n)
{
    int *p_max = &values[0];

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
        //  RETURNS POINTER TO MAX INT IN ARRAY
        int *max_int = maximum_a(values, n);
        
        printf("Max int from array = %i\n", *max_int);

        exit(EXIT_SUCCESS);
    }
    return 0;
}
