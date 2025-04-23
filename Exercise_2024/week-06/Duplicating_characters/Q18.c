#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void double_spaces(char *letter)
{

    for (int i = 0; letter[i] != '\0'; i++)
    {
        {
            if (letter[i] == ' ')
            {
                printf("  ");
            }
            else
            {
                printf("%c", letter[i]);
            }
        }
    }
}

int main()
{
    char letter[256];
    while (fgets(letter, sizeof letter, stdin) != NULL)
    {
        double_spaces(letter);
    }

    return 0;
}