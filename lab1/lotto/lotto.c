#include <stdio.h>
#include <stdlib.h>

/* Generates 6 non-negative random integer between 1 and 45 */

int main(void)
{
	int numbers[10];
	int number;
	for(int i = 0; i < 6; i++) {
		number = rand() % 45 + 1;
		for(int j = 0; j < 6; j++) {
			if(numbers[j] == number) {
				number = rand() % 45 + 1;
			}
		}
		numbers[i] = number;
		printf("%d\t", number);
	}
	printf("\n");
	return 0;
}
