#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char fruit[31];
    gets(fruit);
    int count = 1;
    while (1)
    {
        char ff[31];
        gets(ff);
        count++;
        if (strcmp(fruit, ff) == 0)
        {
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}


