#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main()
{
    char line[256];
    char best_pizza[33] = "";
    int max_ingredient = -1;

    while (fgets(line, sizeof(line), stdin))
    {
        char *tokens[64];
        int token_count = 0;

        char *token = strtok(line, ";");

        while (token != NULL)
        {
            tokens[token_count++] = token;
            token = strtok(NULL, ";");
        }

        if(token_count < 3){
            continue;
        }
        // Process each token (ingredient) and update best_pizza and max_ingredient
        int ingredient_count = token_count - 3; // Assuming a function to count ingredients

        if (ingredient_count > max_ingredient)
        {
            strncpy(best_pizza, tokens[0], 32);
            best_pizza[32] = '\0';
            max_ingredient = ingredient_count;
        }
    }
    printf("%s\n", best_pizza);
    return 0;
}