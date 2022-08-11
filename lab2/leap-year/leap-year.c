#include <stdio.h>
#include <stdlib.h>

/* A leap year is calculated using two equations
 * 1. divisible by 400
 * 2. divisible by 4 && NOT 100
 * e.g: 1996, 2000, 2012 are leap years
 * 	1899, 1900, 2013 are NOT leap years 
 * 
 * Arguments accepts 4 digit years 
 * and will return a * if a leap year */

/* Calculates if leap year */
void isleap(char *year)
{
	// convert string to int
	int intyear = atoi(year);
	
	if(intyear % 400 == 0 || (intyear % 4 == 0 && intyear % 100 != 0)) {
		printf("%i *\n", intyear);
	}	
	else {
		printf("%i\n", intyear);
	}
}


int main(int argc, char *argv[])
{
	if(argc < 2) {
		fprintf(stderr, "Usage: %s accept args: [year1 year2 year3...]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else {
		for(int i = 1; i < argc; ++i) {
			isleap(argv[i]);
		}
	}

	return 0;
}
