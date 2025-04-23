#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char sentence[21];

    while (fgets(sentence, sizeof sentence, stdin))
    {

        if (strcmp(sentence, "THE END") == 0)
        {
            break;
        }

        int count = 0;
        for (int i = 0; sentence[i] != '\0'; i++)
        {
            count++;

            if (count >= 10 && strchr(sentence, ' ') == NULL)
            {
                printf("%s", sentence);
                count = 0;
            }
        }
    }
    return 0;
}