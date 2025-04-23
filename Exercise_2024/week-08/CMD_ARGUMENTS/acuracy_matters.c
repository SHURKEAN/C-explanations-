#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>



int main(int argc, char *argv[]){
    double sum = 0;
    for (int i = 1; i < argc; i++)
    {
        double num = atof(argv[i]);
        sum += num;
        
    }

    printf("%f\n", sum / (argc - 1));

    
    return 0;
}