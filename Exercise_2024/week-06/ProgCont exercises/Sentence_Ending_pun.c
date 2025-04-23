// Ex -> number PC200504
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(){
    char sentence[101];

    while (fgets(sentence, sizeof sentence, stdin) != NULL)
    {

        int len = 0;

        // Finding the length of the string 
        while (sentence[len] != '\0')
        {
            len++;
        }

        // Striping the last character \n 
        if(len > 0 && sentence[len-1] == '\n'){
            sentence[len-1] = '\0';
            len--;
        }

        // Printing the length of the string
        if (len > 0)
        {
            char last = sentence[len-1];
            if (last == '.' || last == '?' || last == '!'){
                printf("%s\n", sentence);
            }
        }
    }
    return 0;
}