#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
// #include <fcntl.h>
// #include <sys/types.h>
// #include <sys/stat.h>
// #include <unistd.h>

int get_size(char file[])
{
    struct stat sfile;
    if(stat(file, &sfile) == -1) {
        return -1;
    }
    return sfile.st_size;
}

char *time_conversion(char file[])
{
    struct stat sfile;
    if(stat(file, &sfile) == -1) {
        return "FAIL\n";
    }
    return ctime(&sfile.st_mtime);
}

int get_mod_time(char file[])
{
    struct stat sfile;
    if(stat(file, &sfile) == -1) {
        return -1;
    }
    return sfile.st_mtime;
}

int main(int argc, char *argv[])
{
//  ENSURE THAT PROGRAM HAS CORRECT NUMBER OF ARGUMENTS
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <file1> <file2> <etc...>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
        
        for(int i = 1; i < argc; i++) {
            printf("\nFILE-INFO: %s\n", argv[i]);
            printf("Modification timestamp: %d\n", get_mod_time(argv[i]));
            printf("Modification time and date: %s", time_conversion(argv[i]));
            printf("File size: %d\n", get_size(argv[i]));
            printf("\n");
        }

        exit(EXIT_SUCCESS);
    }

    return 0;
}
