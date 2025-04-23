#include <stdint.h>
#include <stdio.h>

int count_of_local_maximums(int *numbers, int length){
    int count = 0;

    for(int i = 1; i < length - 1; i++){
        if(numbers[i] > numbers[i - 1] && numbers[i] > numbers[i + 1]){
            count++;
        }
    }
    

    return 0;
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

        printf("%d\n", count_of_local_maximums(numbers, number_counts));
        
        test_cases--;
    }
    return 0;
}