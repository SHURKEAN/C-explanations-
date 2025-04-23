#include <stdio.h>
#include <stdint.h>


void double_even_digits(char *letter){

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c= letter[i];
        if(c == '0' || c == '2' || c == '4' || c == '6' || c == '8'){
            printf("%c%c", c,c);
        }else{
            printf("%c", c);
        }       
    }
    
}


int main(){

    char letter[256];
    while (fgets(letter, sizeof letter, stdin) != NULL)
    {
        double_even_digits(letter);
    }
    
    return 0;
}