#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// gcc -std=c99 -Wall

void decrement_even_digits(char *letter){

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];
        if(c >= '0' && c <= '9'){
            if((c - '0') % 2 == 0){
                printf("%c", c - 1);
            }else{
                printf("%c", c);
            }
        }else{
            printf("%c", c);
        }
    }
    

}

int main(){

    char letter[256];

    while (fgets(letter, sizeof letter, stdin) != NULL)
    {

        letter[strcspn(letter,"\n")] = '\0';
        decrement_even_digits(letter);        
    }
    
    return 0;
}