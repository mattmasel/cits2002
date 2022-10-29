#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>

void traverse_directory(char *directory)
{
    DIR *dirp = opendir(directory);
    
    if(dirp == NULL) {
        perror("directory");
        exit(EXIT_FAILURE);
    }

    struct dirent *dp;

    while((dp = readdir(dirp)) != NULL) {
        char pathname[BUFSIZ];
        sprintf(pathname, "%s/%s", directory, dp->d_name);
        printf("%s\n", pathname);
    }
    
    closedir(dirp);
}

int main(int argc, char *argv[])
{
    if(argc < 2) {
        fprintf(stderr, "Usage %s <arg1>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    traverse_directory(argv[1]);
    return 0;
}