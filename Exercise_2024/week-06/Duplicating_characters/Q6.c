#include <stdint.h>
#include <stdio.h>



void double_digits(char *letter){

    for (int i = 0; letter[i] != '\0'; i++)
    {
        if (letter[i] >= '0' && letter[i] <= '9')
        {
            printf("%c%c", letter[i],letter[i]);
        }else{
            printf("%c",letter[i]);
        }        
    }
    
}

int main(){
    char letter[256];
    while (fgets(letter, sizeof letter, stdin) != NULL)
    {
        double_digits(letter);
    }
    
    return 0;
}