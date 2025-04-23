#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// gcc -std=c99 -Wall

void decrement_digits(char *letter){

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];
        if(c >= '0' && c <= '9'){
            printf("%c", c - 1);
        }else{
            printf("%c", c);
        }
    }
    

}

int main(){
    int test_cases;
    scanf("%d", &test_cases);
    getchar();

    while (test_cases != 0)
    {
        char letter[256];

        fgets(letter, sizeof letter, stdin);
        letter[strcspn(letter,"\n")] = '\0';
        decrement_digits(letter);

        test_cases--;
        
    }
    
    return 0;
}