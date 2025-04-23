#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void decrement_odd_digits(char *letter){
    
    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];
        if (c >= '0' && c <= '9')
        {
            if ((c - '0') % 2 == 0)
            {
                printf("%c", c);
            }else{
                c = c - 1;
                printf("%c", c);
            }
        }else{
            printf("%c", c);
        }
        
    }
    
}

int main(){
    char letter[256];
    while(fgets(letter, sizeof letter, stdin) != NULL){
        decrement_odd_digits(letter);
    }
    return 0;
}