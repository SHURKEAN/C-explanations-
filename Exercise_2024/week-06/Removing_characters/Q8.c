#include <stdint.h>
#include <stdio.h>
#include <string.h>

// !! gcc -std=c99 -Wall delete_digits.c
// !! Explanation for the - '0' -> How to turn the char to int and becareful of the operator precedence


void delete_even_digits(char *letter)
{

    for (int i = 0; letter[i] != '\0'; i++)
    {
        if (letter[i] >= '0' && letter[i] <= '9')
        {
            if ((letter[i] - '0') % 2 == 0)
            {
                {
                    continue;
                }
            }
        }
        printf("%c", letter[i]);
    }
}

int main()
{

    char letter[256];

    while (fgets(letter, sizeof letter, stdin) != NULL)
    {
        delete_even_digits(letter);
    }

    return 0;
}