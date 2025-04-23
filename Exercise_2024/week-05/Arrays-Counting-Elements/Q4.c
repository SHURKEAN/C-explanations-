#include <stdlib.h>
#include <stdio.h>


int count_of_evens(int *numbers, int length){
    int count = 0;
    for(int i = 0; i < length; i++){
        if(numbers[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases != 0)
    {
        int number_of_cases, numbers[101];
        scanf("%d", &number_of_cases);

        for(int i = 0; i < number_of_cases; i++){
            scanf("%d", &numbers[i]);
        }

        printf("%d\n", count_of_evens(numbers, number_of_cases));
    }
    
    return 0;
}
