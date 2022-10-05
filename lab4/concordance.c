#define _POSIX_C_SOURCE     200809L

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char **words    = NULL;
int n_words     = 0;

//  PRINT CONCORDANCE ARRAY
void print_concordance()
{
    for(int i = 0; i < n_words; i++) {
        puts(words[i]);
    }
}

//  ADD WORD TO CONCORDANCE
void add_word(char word[])
{
    for(int i = 0; i < n_words; i++) {
        if(!strcmp(word, words[i])) {
            return;
        }
    }
    words = realloc(words, (n_words + 1) * sizeof words[0]);
    words[n_words++] = strdup(word);
}

//  SPLIT LINE INTO WORDS
void find_words(char line[])
{
    while(*line != '\0') {                  //  FINDS START OF A WORD FROM LINE
        char word[BUFSIZ];
        int j = 0;

        while(isalpha(*line)) {             //  ITERATES UNTIL NO MORE LETTERS
            word[j++] = *line;
            line++;
        }
        
        if(j > 0) {                                 //  REMOVES BLANK WORDS
            word[j] = '\0';
            add_word(word);
        }
        
        while(*line != '\0' && !isalpha(*line)) {   //  FINDS NEXT WORD
            line++;
        }
    }
}

//  GET LINE FROM FILE
void extract_file(FILE *fp)
{
    char line[BUFSIZ];

    while(fgets(line, sizeof line, fp) != NULL) {
        find_words(line);
    }
}

int main (int argc, char *argv[])
{
    if(argc != 2) {
        printf("Usage: %s <filepath>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
        FILE *fp = fopen(argv[1], "r");
        
        if(fp == NULL) {
            printf("error with file\n");
            exit(EXIT_FAILURE);
        }
        
        extract_file(fp);
        fclose(fp);

        print_concordance();

        exit(EXIT_SUCCESS);
    }
    
    return 0;
}