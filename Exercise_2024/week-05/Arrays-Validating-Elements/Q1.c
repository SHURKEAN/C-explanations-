#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>



int has_matching_parity(int *numbers, int length){
    int increasing = 1;
    int decreasing = 1;
    for (int i = 0; i < length; i++)
    {
        if(numbers[i] > numbers[i-1] || numbers[i] == numbers[i-1]){
            increasing = 0; // Not increasing
        }

        if(numbers[i] < numbers[i-1]){
            decreasing = 0; // Not decreasing
        }
    }
    
    return increasing || decreasing;
}


int main(){
    int test_cases;
    scanf("%d", &test_cases);

    while(test_cases != 0){
        int length;
        scanf("%d", &length);
        int number[20];

        for (int i = 0; i < length; i++)
        {
            scanf("%d", &number[i]);
        }
        
        if(has_matching_parity(number, length)){
            printf("True\n");
        }else {
            printf("False\n");
        }

        test_cases--;
    }
}