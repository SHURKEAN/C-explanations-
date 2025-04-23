#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int decrement_lowers(char *letter){

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];
        if (c > 'a' && c < 'z'){
            printf("%c", c - 1);
        }else if(c == 'a'){
            printf("z");
        }else if(c == 'z'){
            printf("a");
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
        decrement_lowers(letter);

        test_cases--;
        
    }
    
    return 0;
}