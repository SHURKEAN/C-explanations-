#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



typedef struct {
    char pizza_name[33];
    char ingredients[33];
    int cm32_price;
    int cm45_price;
} Pizza;

int main () {
    char max_pizza[33];
    int count = 0;
    while (1) {
        int count_of_ingredients = 0;
        Pizza pizza_Set;
        char line[500];
        pizza_Set.ingredients[0] = '\0';

        if (!gets(line)) {
            break;
        }

        // margarita\0tomato\0mozzarella;840;1640\0


        char * token = strtok(line,";");

        strcpy(pizza_Set.pizza_name,token);
        
        while (1) {
            token = strtok(NULL,";");
            if (isdigit(token[0])) {
                pizza_Set.cm32_price = atoi(token);
                token = strtok(NULL,";");
                pizza_Set.cm45_price = atoi(token);
                break;
            }
            strcat(pizza_Set.ingredients,token);
            strcat(pizza_Set.ingredients,";");
        }
        puts(pizza_Set.pizza_name);
        puts(pizza_Set.ingredients);
        printf("%d , %d\n",pizza_Set.cm32_price,pizza_Set.cm45_price);


    }
    return 0;
}