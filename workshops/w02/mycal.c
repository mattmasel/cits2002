#include <stdio.h>
#include <stdlib.h>

// Anything that you include in a header that isnt used is rejected at compilation
// Ctrl+z suspends a program and remembers where it was (use for vim) 
// use fg to bring back to foreground

/*
    August 2022       
Su Mo Tu We Th Fr Sa  
    1  2  3  4  5  6  
 7  8  9 10 11 12 13  
14 15 16 17 18 19 20  
21 22 23 24 25 26 27  
28 29 30 31           
*/                    

#define DEF_MONTH	8
#define DEF_YEAR	2022

#define DAYS_IN_WEEK	7
#define NWEEKS		6

void print_cal(int month, int year)
{
	int days_in_month;

	switch(month) {
		case 8: printf("     August %i\n", year);
		days_in_month = 31;
		break;
	}
	
	printf("Su Mo Tu We Th Fr Sa\n");
	
	int day = 0;

	for(int w = 0; w < NWEEKS; w++) {
		for(int d = 0; d < DAYS_IN_WEEK; d++) {
			if(day < 1 || day > days_in_month) {
				printf("   ");
			}
			else {
				printf("%2i ", day);
			}
			++day;
		}
	printf("\n");
	}	
}

int main(int argc, char *argv[])
{
	int month = DEF_MONTH;
	int year = DEF_YEAR;
	
	print_cal(month, year);		
	
	exit(EXIT_SUCCESS);
}
