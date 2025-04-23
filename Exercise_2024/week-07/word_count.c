#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(){

    char buffer_size[121];
    while (fgets(buffer_size, sizeof buffer_size, stdin))
    {
        int count = 0;
        int in_word = 0;

        for (int i = 1; buffer_size[i] != '\0'; i++)
        {
            if(isspace(buffer_size[i])){
                in_word = 0;
            }else if(!in_word){
                in_word = 1;
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
    
}