#include <stdlib.h>
#include <stdio.h>
int count_of_evens(int *numbers, int length){
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (numbers[i] % 2 == 0){
            count++;
        }
    }
    
    return count;
}


int main(){
    while (1)
    {
        int test_cases;
        int number[11];
        scanf("%d", &test_cases);

        for (int i = 0; i < test_cases; i++)
        {
            scanf("%d", &number[i]);
        }


        printf("%d\n", count_of_evens(number, test_cases));
        
    }
    
    return 0;
}