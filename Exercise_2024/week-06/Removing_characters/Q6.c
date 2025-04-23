#include <stdint.h>
#include <stdio.h>
#include <string.h>


void delete_digits(char *letter){
    
    for (int i = 0; letter[i] != '\0'; i++)
    {
        if (!(letter[i] >= '0' && letter[i] <= '9')){
            printf("%c", letter[i]);
        }
    }
    
}

int main(){

    char letter[1024];

    while (fgets(letter, sizeof letter, stdin))
    {
        if(letter[0] == '\n'){
            break;
        }

        delete_digits(letter);
    }
    

    return 0;
}