// 1. Include the headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2. Define constants
#define MAX_AIRPORTS 20
#define MAX_LEN    100

// 3. Declare the airport struct
typedef struct 
{
    char name[31];
    char city[31];
    int runways;
    int time;
}AIRPORT;

int cmp_airport(const void *a, const void *b){
    const AIRPORT *A = a;
    const AIRPORT *B = b; 

    // Compute B->runways - A->runways.
    // Look at the sign of that result:
    // Positive ( > 0 ) → tells qsort “A goes after B.”
    // Negative ( < 0 ) → tells qsort “A goes before B.”
    // Zero → they’re equal on runways, so move on to the next criterion.


    if(A->runways != B->runways){
        return B-> runways - A->runways;
    }

    if (A->time != B->time)
    {
        return B->time - A->time;
    }


    return strcmp(A->name, B->name);
    
}



int main(int argc, char argv[]){
    if(argc == 1){
        printf("No input file specified", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], 'r');
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char line[101];
    AIRPORT airports[MAX_LEN];
    int length = 0;

    // length -> keeps track of how many airport records you’ve read so far.
    // You use it as the index into your airports[] array—so the first record goes 
    // into airports[0], the next into airports[1], and so on.
    // At the end, length tells you how many valid entries you have 
    // (you’ll need that when you sort or print).

    while (fgets(line, sizeof line, file))
    {
        strcpy(airports[length].name, strtok(line, ";"));  // strtok is explain the the 6th chapter 
        strcpy(airports[length].city, strtok(NULL, ";"));
        airports[length].runways, atoi(strtok(NULL, ";"));
        airports[length].time, atoi(strtok(NULL, ";"));

        length++;
    }

    fclose(file);
    qsort(airports, length, sizeof(AIRPORT), cmp_airport);

    if(argc == 2){
        printf("Sorted airport records:\n");
        return 1;
    }

    FILE *file_fail = fopen(argv[1], 'w');
    if(!file_fail){
        fprintf(stderr, "Can not open the output file");
        return 2;
    }


    for (int i = 0; i < length; i++)
    {
        fprintf(file_fail,"%s;%s;%d;%d\n", airports[i].name, airports[i].city, airports[i].runways, airports[i].time);
    }
    return 0;
}

