#include <stdlib.h>
#include <stdio.h>



int count_of_primes(int *numbers, int length){
    int count = 0;
    

    for (int i = 0; i < length; i++)
    {
        if(numbers[i] < 2) continue;
        int is_prime = 1;
        for (int j = 2; j * j <= numbers[i]; j++){
            if (numbers[i] % j == 0){
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            count++;
        }
        
    }
    

    return count;
}


int main(){
    int test_cases;
    
    while (scanf("%d", &test_cases) != EOF)
    {
        int number[11];

        for (int i = 0; i < test_cases; i++)
        {
            scanf("%d", &number[i]);
        }


        printf("%d\n", count_of_primes(number, test_cases));        
    }
    
    return 0;
}