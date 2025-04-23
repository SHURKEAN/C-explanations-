#include <stdint.h>
#include <stdio.h>

void double_odd_digits(char *letter)
{

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];
        if ((c - '0') % 2 == 1)
        {
            printf("%c%c", c, c);
        }
        else
        {
            printf("%c", c);
        }
    }
}

int main()
{

    char letter[256];
    while (fgets(letter, sizeof letter, stdin) != NULL)
    {
        double_odd_digits(letter);
    }

    return 0;
}