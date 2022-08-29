#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
//  ENSURE THAT PROGRAM HAS CORRECT NUMBER OF ARGUMENTS
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <new> <old> <source>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
            

        exit(EXIT_SUCCESS);
    }

    return 0;
}
