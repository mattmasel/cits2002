#include <stdio.h>
#include <stdlib.h>

//  INSERTION SORT 
int get_large(int *array)
{
    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(array[i] > array[j]) {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    return array[9];
}

int *randomize(int *array)
{
    int i;

    int seed = 123;
    srand(seed);

    while(i < 10) {

        array[i] = rand() % 100;
        i++;
    }
    return array;
}

int main(int argc, char *argv[])
{
//  ENSURE THAT PROGRAM HAS CORRECT NUMBER OF ARGUMENTS
    if (argc > 2) {
        fprintf(stderr, "Usage: %s <seed> <n>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
        int *random_numbers;
        int array[10]; 
        random_numbers = randomize(array);
//  PRINT ALL NUMBERS
        for(int i = 0; i < 10; i++) {
            printf("%i. %i\n", i + 1, random_numbers[i]);
        }
//  PRINT LARGEST NUMBER
        int largest = get_large(array);
        printf("\nLargest number: %d\n", largest);
    
        exit(EXIT_SUCCESS);
    }
    return 0;
}