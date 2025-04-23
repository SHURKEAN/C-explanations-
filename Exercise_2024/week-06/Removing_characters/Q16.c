#include <stdio.h>
#include <stdint.h>

void delete_spaces(char *letter)
{

    for (int i = 0; letter[i] != '\0'; i++)
    {
        {
            if (letter[i] == ' '){
                continue;
            }
        }
        printf("%c", letter[i]);
    }
}

int main()
{
    int testcases;
    scanf("%d", &testcases);
    getchar();
    while (testcases-- > 0)
    {
        char letter[256];
        fgets(letter, sizeof letter, stdin);
        delete_spaces(letter);
    }

    return 0;
}