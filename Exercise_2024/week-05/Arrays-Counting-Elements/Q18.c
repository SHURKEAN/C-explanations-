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
    
    while(1){
        int test_cases;
        scanf("%d", &test_cases);
        if (test_cases == 0){
            break;
        }
        int numbers[11];

        for(int i = 0; i < test_cases; i++)
        {
            scanf("%d", &numbers[i]);
        }

        printf("%d\n", count_of_negative(numbers, test_cases));
    }
    return 0;
}