#include <stdio.h>
#include <stdlib.h>


int count_of_decreasing_neighbors(int *numbers, int length){
    int count = 0;
    for (int i = 0; i < length - 1; i++) {
        if (numbers[i] > numbers[i + 1]) {
            count++;
        }
    }

    return count;
}



int main(){
    int test_cases;
    scanf("%d", &test_cases);
    while(test_cases != 0){
        int number_of_cases;
        scanf("%d", &number_of_cases);

        int number[11];

        for (int i = 0; i < number_of_cases; i++)
        {
            scanf("%d", &number[i]);
        }

        printf("%d\n", count_of_decreasing_neighbors(number, number_of_cases));
        test_cases--;
        
    }
    return 0;
}