#include <stdio.h>
#include <stdint.h>


int strictly_increasing(int *numbers, int length){
    int increasing = 1;

    for (int i = 1; i < length; i++)
    {
        if(numbers[i] <= numbers[i - 1]){
            increasing = 0;
        }
    }

    return increasing;
    
}


int main(){
    
    while (1)
    {
        
        int test_cases;
        scanf("%d", &test_cases);

        if(test_cases == 0){
            break;
        }

        int num[121];

        for(int i = 0; i < test_cases; i++){
            scanf("%d", &num[i]);
        }

        if(strictly_increasing(num, test_cases)){
            printf("True\n");
        }else{
            printf("False\n");
        }
    }
    
    return 0;
}