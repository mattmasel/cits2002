#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace(char new[], char old[], char source[])
{

    char *output;
    char *result = source;
    while (strstr(source, old) != NULL) {

        output = strstr(result, old);
        for(int i = 0; i < strlen(old); i++){
            output[i] = '*';
        }
        printf("%s\n", output);


        char *decay;
        decay = strtok(output, "*");
        result = strcat(new, decay);
        printf("%s\n", result);
        
    }

}

int main(int argc, char *argv[])
{
//  ENSURE THAT PROGRAM HAS CORRECT NUMBER OF ARGUMENTS
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <new> <old> <source>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
        printf("Input: %s\n", argv[3]);

        replace(argv[1], argv[2], argv[3]);
        printf("Output: %s\n", argv[3]);


        exit(EXIT_SUCCESS);
    }

    return 0;
}
