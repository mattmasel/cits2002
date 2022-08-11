#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static int max = INT_MIN;

void find_max(int number)
{
	if (number > max) {
		max = number;
	}	
}

void print_max()
{
	printf("%i\n", max);
}

int main(int argc, char *argv[])
{
	if(argc < 2) {
		fprintf(stderr, "Usage %s: Please enter at least one number", argv[0]);
	}
	else {
		int n;
		for(int i = 1; i < argc; ++i) {
			find_max(n = atoi(argv[i]));
		}
		
		print_max();
	}
	return 0;
}
