#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 32

int main(void)
{
    int counter = 0;
    char first[BUFFER_SIZE], current[BUFFER_SIZE];

    fgets(first, BUFFER_SIZE, stdin);

    while (fgets(current, BUFFER_SIZE, stdin))
    {
        counter++;
        if (!strcmp(first, current))
        {
            printf("%d\n", counter);
            return 0;
        }
    }

    return 0;
}