#include <stdio.h>
#include <stdlib.h>

int *randomize(int *array)
{
    int i;

    int seed = 123;
    srand(seed);

    while(i < 10) {

        array[i] = rand();
        i++;
    }
    return array;
}

int main(int argc, char *argv[])
{
//  ENSURE THAT PROGRAM HAS CORRECT NUMBER OF ARGUMENTS
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <seed> <n>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
        int *random_numbers;
        int array[10]; 
        random_numbers = randomize(array);
        for(int i = 0; i < 10; i++) {
            printf("%i\n", random_numbers[i]);
        }
    
        exit(EXIT_SUCCESS);
    }
    return 0;
}