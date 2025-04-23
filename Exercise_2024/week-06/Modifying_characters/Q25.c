#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


// !! There is a problem with the 9th number check it 

void increment_odd_digits(char *letter)
{

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];
        if (c >= '0' && c < '9')
        {
            int num = c - '0';
            if (num % 2 == 0)
            {
                printf("%c", c);
            }
            else if (num == 1)
            {
                c = c + 1;
                printf("%c", c);
            }else if(num == 9){
                printf("10");
            }
            else
            {
                c = c + 1;
                printf("%c", c);
            }
        }
        else
        {
            printf("%c", c);
        }
    }

    printf("\n");
}

int main()
{
    int test_cases;
    scanf("%d", &test_cases);
    char letter[256];
    getchar();
    while (test_cases != 0)
    {
        
        fgets(letter, sizeof letter, stdin);
        increment_odd_digits(letter);
        test_cases--;
    }
    return 0;
}