#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>



int main(int argc, char *argv[]){

    int max = atoi(argv[1]); // -> atoi function help to convert the string argument to an integer
    for (int i = 2; i < argc; i++)
    {
        int v = atoi(argv[i]);

        if(v > max){
            max = v;
        }
    }

    printf("%d\n", max);

    
    return 0;
}