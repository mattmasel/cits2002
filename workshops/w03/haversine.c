#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#if     defined(__linux__)
#define __USE_XOPEN
#endif

#include <math.h>

#define MIN_LAT         -90.0
#define MAX_LAT         90.0
#define MIN_LON         -180.0
#define MAX_LON         180


double degrees_to_radians(double degrees)
{
    return degrees / 180.0 / M_PI;
}

bool valid_location(double latitude, double longitude)
{
    return latitude >= MIN_LAT && latitude <= MAX_LAT && 
           longitude >= MIN_LON && longitude <= MAX_LON;
}

double haversine(double latitude1, double longitude1, double latitude2, double longitude2)
{   
    //TODO if get spare time complete, found in Chris McDonald's solutions.
    return 0.0;
}

int main(int argc, char *argv[])
{
    if(argc != 5) {
        fprintf(stderr, "Usage %s: Requires 4 arguments", argv[0]);
        exit(EXIT_FAILURE);
    }
    else {
        double lat1 = atof(argv[1]);
        double lon1 = atof(argv[2]);
        double lat2 = atof(argv[3]);
        double lon2 = atof(argv[4]);

        if(!valid_location(lat1, lon1)) {
            printf("point 1 invalid\n");
            exit(EXIT_FAILURE);
        }

        if(!valid_location(lat2, lon2)) {
            printf("point 2 invalid\n");
            exit(EXIT_FAILURE);
        }        

        printf("The Haversine distance = %.1fm\n", haversine(lat1, lon1, lat2, lon2));

    }
    exit(EXIT_SUCCESS);
    return 0;
}