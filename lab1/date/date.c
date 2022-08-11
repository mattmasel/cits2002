#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t t;
	// time(&t) is the same as t = time(NULL) 
	time(&t);
	printf("Todays date is: %s", ctime(&t));

	return 0;
}
