#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(){
    char letter[256];

    while (1)
    {
        fgets(letter, sizeof letter, stdin);

        if (letter == "THE END")
        {
            break;
        }

        printf("%s", letter);
        
    }
    


    return 0;
}