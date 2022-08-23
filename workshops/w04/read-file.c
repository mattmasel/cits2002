#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/time.h>
#include <inttypes.h>

int64_t milliseconds(void)
{
    struct timeval now;

    gettimeofday(&now, NULL);
    return ((int64_t)now.tv_sec * 1000) + now.tv_usec/1000;
}

void readfile(char filename[], int buffersize)
{
    int64_t start = milliseconds();
    int ncalls = 0;

    int fd = open(filename, O_RDONLY);
    ++ncalls;
    
    // CHECK IF FILE CAN BE OPENED
    if(fd < 0) {
        printf("cannt open '%s'\n, filename", filename);
        exit(EXIT_FAILURE); 
    }
    else {
        char buffer[buffersize];
        size_t got;
        
        // CHECK IF FILE CAN BE OPENED
        while((got = read(fd, buffer, sizeof buffer)) > 0) {
            ++ncalls;
        }
        close(fd);
        ++ncalls;

        printf("%i\t%i\n", buffersize, (int)(milliseconds() - start));
    }
}

void usage(char argv0[])
{
    fprintf(stderr, "Usage %s: filename blocksize\n", argv0);
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
    if(argc != 3) {
        usage(argv[0]);
    }
    else {
        int buffersize = atoi(argv[2]);

        if(buffersize <= 0) {
            usage(argv[0]);
        }

        readfile(argv[1], buffersize);

        return EXIT_SUCCESS;
    }
}