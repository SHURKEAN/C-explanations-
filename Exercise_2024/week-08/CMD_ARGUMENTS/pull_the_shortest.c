#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>



int main(int argc, char *argv[]){

    size_t minlen = strlen(argv[1]);
    for (int i = 2; i < argc; i++)
    {
        size_t len = strlen(argv[i]);

        if (len < minlen)
        {
            minlen = len;
        }
        
    }


    for (int i = 1; i < argc; i++)
    {
        if(strlen(argv[i]) == minlen){
            printf("%s\n", argv[i]);
        }
    }
    


    
    return 0;
}