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
    scanf("%d", &test_cases);
    while (test_cases != 0)
    {
        int number[11];
        int number_of_digits;
        scanf("%d", &number_of_digits);

        for (int i = 0; i < number_of_digits; i++)
        {
            scanf("%d", &number[i]);
        }


        printf("%d\n", count_of_primes(number, number_of_digits));

        test_cases--;
        
    }
    
    return 0;
}