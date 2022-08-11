#define _CRT_RAND_S

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

/* Fill a 2D array of 10x20 integers 
 * Integers must be non-negative and random 
 * Print out 2nd largest value in array 
 * Cannot use premade sort function **/

int array[10][20];
int large1, large2;

void get_array()
{
	for(int i = 0; i < 10; i++) {
                for(int j = 0; j < 20; j++) {
                        array[i][j] = rand() % 1000;
                }
        }
}

void sort_array()
{
	large1 = INT_MIN;
	for(int i = 0; i < 10; i++) {
                for(int j = 0; j < 20; j++) {
                        if(array[i][j] > large1) {
				large2 = large1;
				large1 = array[i][j];
			}
                }
        }
}

int main(void)
{
	srand(time(NULL));

	get_array();
	sort_array();
	printf("The largest number is: %d\nThe second largest number is: %d\n", large1, large2);

	return 0;
}
