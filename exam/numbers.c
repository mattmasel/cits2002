#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void print_results(int *arr)
{
    printf("%i", *arr++);
    while(*arr != INT_MIN) {
        printf(", %i", *arr++);
    }
    printf("\n");
}

int *get_numbers(char *range)
{
    if(range == NULL) {
        return (int*)1;
    }

    int lower = 0;
    static int upper = 0;

    if (sscanf(range, "%i-%i", &lower, &upper) != 2) {
        fprintf(stderr, "error in argument format\n");
        exit(EXIT_FAILURE);
    }

    int *numbers = malloc(upper * sizeof(int));
    
    for(int i = 0; lower <= upper; i++) {
        numbers[i] = lower;
        numbers[i+1] = INT_MIN;         // SET AS TERMINATING NUMBER
        lower++;
    }
    
    return numbers;
}

int main(int argc, char *argv[])
{
    if(argc != 2) {
        fprintf(stderr, "usage %s <1-20>\n", argv[0]);
        return 1;
    }

    print_results(get_numbers(argv[1]));



    return 0;
}
