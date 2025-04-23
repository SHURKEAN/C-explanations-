#include <stdint.h>
#include <stdio.h>
#include <string.h>

void delete_consonants(char *letter)
{

    for (int i = 0; letter[i] != '\0'; i++)
    {
        char c = letter[i];

        if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) &&
            (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
             c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
        {
            printf("%c", letter[i]);
        }
    }
    printf("\n");
}

int main()
{

    int test_cases;
    scanf("%d", &test_cases);
    getchar(); // ->  is a standard C library function (in <stdio.h>) that reads exactly one character from standard input (stdin) and returns it as an int.
    while (test_cases != 0)
    {
        char letter[256];
        fgets(letter, sizeof letter, stdin);
        delete_consonants(letter);
        test_cases--;
    }

    return 0;
}

// ! Main points to Explain 
// ? Why do we use getchar()?
// ? Logic behind the code?



// Why we use it here
// When you do:

// scanf("%d", &test_cases);
// scanf reads the number but leaves the newline ('\n') in the input buffer. 
// The next call to fgets() will immediately see that leftover '\n' and treat it as 
// an empty line.
// By calling:
// getchar();
// you read (and discard) that stray '\n', so your subsequent fgets() actually waits for 
// the user’s next real line of text.