#include <stdint.h>
#include <stdio.h>
#include <string.h>


void increment_uppers(char *letter){
    // Decrement the upper 32 bits of the register

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];
        if (c >= 'A' && c < 'Z'){
            printf("%c", c + 1);
        }else if(c == 'Z'){
            printf("%c", 'A');
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
        increment_uppers(letter);
    }
    
    return 0;
}