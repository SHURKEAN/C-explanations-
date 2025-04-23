#include <stdint.h>
#include <stdio.h>



void delete_uppers(char *letter){
    for(int i = 0; letter[i] != '\0'; i++){
        if(letter[i] >= 'A' && letter[i] <= 'Z'){
            continue;
        }


        printf("%c", letter[i]);
    }
}

int main(){

    char letter[256];

    while (fgets(letter, sizeof letter, stdin) != NULL)
    {
        delete_uppers(letter);
    }
    

    return 0;
}