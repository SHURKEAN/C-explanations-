#include <stdlib.h>
#include <stdio.h>




int count_of_negative(int *numbers, int length){
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (numbers[i] < 0) {
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
        int number_counts;
        scanf("%d", &number_counts);

        for(int i = 0; i < number_counts; i++)
        {
            scanf("%d", &numbers[i]);
        }

        printf("%d\n", count_of_negative(numbers, number_counts));
        
        test_cases--;
    }
    return 0;
}