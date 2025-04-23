#include <stdint.h>
#include <stdio.h>



void delete_lowers(char *letter){

    for (int i = 0; letter[i] != '\0'; i++)
    {
        if(letter[i] >= 'a' && letter[i] <= 'z'){
            continue;
        }
        printf("%c", letter[i]);
    }
    
}


int main(){

    char letter[256];

    while (fgets(letter, sizeof letter, stdin) != '\0')
    {
        delete_lowers(letter);
    }
    
    return 0;
}