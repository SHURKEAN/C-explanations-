#include <stdint.h>
#include <stdio.h>

// !! gcc -std=c99 -Wall delete_digits.c


void delete_odd_digits(char *letter){

    for (int i = 0; letter[i] != '\0'; i++)
    {
        if (letter[i] >= '0' && letter[i] <= '9')
        {
            if ((letter[i] - '0') % 2 != 0)
            {
                {
                    continue;
                }
            }
        }

        printf("%c", letter[i]);
        
    }
    
}


int main(){
    int testcases;
    scanf("%d",&testcases);
    getchar();
    while (testcases--> 0)
    {
        char letter[256];
        fgets(letter, sizeof letter, stdin);
        delete_odd_digits(letter);
    }
    
    return 0;
}