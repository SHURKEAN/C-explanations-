#include <stdio.h>
#include <stdint.h>



void delete_vowels(char *letter){

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'
            || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
            continue;
        }
        
        // !! This part is only reach if the if-condition is false
        printf("%c", letter[i]);
    }
    
}


int main(){

    char letter[256];

    while (fgets(letter, sizeof letter, stdin) != NULL)
    {
        delete_vowels(letter);
    }
    

    return 0;
}