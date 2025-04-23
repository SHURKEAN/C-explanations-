#include <stdio.h>
#include <stdint.h>

void double_consonants(char *letter)
{

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
        {
            printf("%c%c", c, c);
        }else{
            printf("%c", c);
        }
        
    }
}

int main()
{
    int test_cases;
    scanf("%d", &test_cases);
    getchar();
    for (int i = 0; i < test_cases; i++)
    {
        char letter[256];
        if(fgets(letter, sizeof letter, stdin) == NULL){
            break;
        };
        double_consonants(letter);
    }
    return 0;
}