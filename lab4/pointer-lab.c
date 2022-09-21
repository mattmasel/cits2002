#include <stdio.h>
#include <stdlib.h>

//  BREAKS TOTAL INTO DOLLARS AND CENTS
//  EG 524 BECOMES 5 AND 24
void money(int total, int *dollars, int *cents)
{
    *dollars = total / 100;
    *cents   = total % 100;
}

int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("Usage %s: <total>", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
        int total = atoi(argv[1]);
        int dollars;
        int cents;

        money(total, &dollars, &cents);
        
        printf("dollars = %i\n", dollars);
        printf("cents   = %i\n", cents);

        exit(EXIT_SUCCESS);
    }
    return 0;
}
