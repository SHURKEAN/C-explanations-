#include <stdint.h>
#include <stdio.h>

int monotone_increasing(int *numbers, int length){
    int increasing = 1;


    for (int i = 1; i < length; i++)
    {
        if(numbers[i] < numbers[i-1]){
            increasing = 0;
            break;
        }
    }
    
    return increasing;
    
}


int main(){
    int test_cases;
    while (scanf("%d", &test_cases) != 0)
    {
        int number[121];
        
        for (int i = 0; i < test_cases; i++)
        {
            scanf("%d", &number[i]);
        }


        if (monotone_increasing(number, test_cases))
        {
            printf("True\n");
        }else{
            printf("False\n");
        }
        
        
    }
    
    return 0;
}