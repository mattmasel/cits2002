#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Adds an ordinal description to numerical arguments */

void nth(char *number)
{
	int current = atoi(number);
	int len = strlen(number);
	char lastdigit = number[len-1];
	
	if(current < 11 || current > 20) {
		switch(lastdigit) {
			case '1' :
				printf("%sst\n", number);
				break;
			case '2' :
            	printf("%snd\n", number);
            	break;
        	case '3' :
            	printf("%srd\n", number);
            	break;
        	default  :
        	    printf("%sth\n", number);
		}
	}
	else {
		printf("%sth\n", number);
	}
	
}

int main(int argc, char *argv[])
{
	if(argc < 2) {
		fprintf(stderr, "USAGE: %s Requires at least 1 argument\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else {
		for(int i = 1; i < argc; i++) {
			nth(argv[i]);
		}
		return EXIT_SUCCESS;
	}
}
