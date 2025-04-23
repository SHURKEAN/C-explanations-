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
    while(scanf("%d", &test_cases) != EOF){
        int number[11];

        for (int i = 0; i < test_cases; i++)
        {
            scanf("%d", &number[i]);
        }

        printf("%d\n", count_of_decreasing_neighbors(number, test_cases));
    }
    return 0;
}


