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
    while(1){
        int number[11];
        int number_of_cases;
        scanf("%d", number_of_cases);

        if(number_of_cases != 0){
            break;
        }
        
        for (int i = 0; i < number_of_cases; i++)
        {
            scanf("%d", &number[i]);
        }

        printf("%d\n", count_of_decreasing_neighbors(number, number_of_cases));
    }
    return 0;
}