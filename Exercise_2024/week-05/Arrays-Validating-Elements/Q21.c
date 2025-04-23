#include <stdio.h>
#include <stdint.h>


int is_twisting(int *numbers, int length){
    int twisting = 0;

    for (int i = 1; i < length; i++)
    {
        if((numbers[i] > 0 && 0 > numbers[i - 1]) || (numbers[i] < 0 && 0 < numbers[i - 1])){
            twisting = 1;
        }
    }

    return twisting;
    
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

        if(is_twisting(num, test_cases)){
            printf("True\n");
        }else{
            printf("False\n");
        }
    }
    
    return 0;
}