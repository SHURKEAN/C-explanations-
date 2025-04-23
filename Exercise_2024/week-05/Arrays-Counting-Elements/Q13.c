#include <stdlib.h>
#include <stdio.h>




int count_of_positives(int *numbers, int length){
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (numbers[i] > 0) {
            count++;
        }
    }
    return count;
}

int main(){
    int test_cases;
    scanf("%d", &test_cases);

    while(test_cases != 0){
        int numbers[11];
        int number_of_digits;
        scanf("%d", &number_of_digits);

        for (int i = 0; i < number_of_digits; i++)
        {
            scanf("%d", &numbers[i]);
        }

        printf("%d\n", count_of_positives(numbers, number_of_digits));
        
        test_cases--;
    }
    return 0;
}