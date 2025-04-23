#include <stdint.h>
#include <stdio.h>
#include <string.h>



#define MAX_LINES 10000
#define MAX_LEN 31 // Can go up to 30 char + the '\0'


void string_copy(char *destination, const char *source){
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    // source:         a p p l e '0'
    //                 0 1 2 3 4  5 6 7
    // destination     a p p l e '0'
    //                 0 1 2 3 4  5
    
    
}


int main()
{
    char seen[10000][31];
    char fruit[31];
    int count = 0; 
    // int repeat_count = 0;
    while (fgets(fruit, sizeof fruit, stdin))
    {
        count++;
        
        for (int i = 0; i < count - 1; i++)
        {
            if(strcmp(fruit, seen[i]) == 0){
                printf("%d\n", count);
                return 0;
            }
        }
        string_copy(seen[count - 1], fruit);
    }

    
}
