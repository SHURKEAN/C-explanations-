#include <stdint.h>
#include <stdio.h>

int monotone_decreasing(int *numbers, int length){
    int decreasing = 1;


    for (int i = 1; i < length; i++)
    {
        if(numbers[i] > numbers[i-1]){
            decreasing = 0;
            break;
        }
    }
    
    return decreasing;
    
}


int main(){
    int test_cases;
    while (scanf("%d", &test_cases) != EOF)
    {
        int number[121];
        
        for (int i = 0; i < test_cases; i++)
        {
            scanf("%d", &number[i]);
        }


        if (monotone_decreasing(number, test_cases))
        {
            printf("True\n");
        }else{
            printf("False\n");
        }
        
        
    }
    
    return 0;
}