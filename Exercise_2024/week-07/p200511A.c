#include <stdio.h>

#define BUFFER_SIZE 52


int words(char *buffer){
    int counter = 0;
    for (; *buffer; buffer++)
    {
        counter += (*buffer == ' ');
    }
    return counter + 1;
    
}

int main(void)
{
    char buffer[BUFFER_SIZE];
    while (fgets(buffer, BUFFER_SIZE, stdin) != NULL)
    {
        {
            if (*buffer == '\n')
            {
                return 0;
            }

            printf("%d\n", words(buffer));
        }
    }
}