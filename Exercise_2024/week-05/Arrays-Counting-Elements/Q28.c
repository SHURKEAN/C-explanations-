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



// Task turn this function into an a n test case one the main function 
int main(){
    int test_cases;
    scanf("%d", &test_cases);
    while(scanf("%d", &test_cases) != EOF){
        int numbers[11];


        for(int i = 0; i < test_cases; i++)
        {
            scanf("%d", &numbers[i]);
        }

        printf("%d\n", count_of_local_maximums(numbers, test_cases));
        
    }
    return 0;
}