#include <stdint.h>
#include <stdio.h>
#include <string.h>


void incrementing_even_digits(char *letter){
    // Decrement the upper 32 bits of the register

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];
        if (c >= '0' && c <= '9')
        {
            int num = c - '0';
            if(num % 2 == 0){
                num += 1;
                printf("%d", num);
            }else{
                printf("%d", num);
            }
        }else{
            printf("%c", c);
        }
    }

    printf("\n");
    
}


int main(){
    char letter[256];

    while (fgets(letter, sizeof letter, stdin) != NULL)
    {
        letter[strcspn(letter,"\n")] = '\0'; // to strip off any trailing \n
        incrementing_even_digits(letter);
    }
    
    return 0;
}