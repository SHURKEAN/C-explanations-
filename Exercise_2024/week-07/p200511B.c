#include <stdio.h>


int main(void){
    int c;
    int whitespace = 0; int length = 0;
    while ((c = getc(stdin)) != EOF)
    {
        switch (c)
        {
        case '\n':
            if(!length)
                return 0;
            printf("%d\n", whitespace + 1);
            whitespace = length = 0;
            break;
        
        case ' ':
            whitespace++;   
        default:
            length++;
            break;
        }
    }

    return 0;
    
}