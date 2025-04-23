#include <stdio.h>
#include <stdlib.h>



int count_of_odds(int *number, int length){
    int odd_number = 0;
    
    for (size_t i = 0; i < length; i++)
    {
        /* code */
        if (number[i] % 2 != 0){
            odd_number++;
        }
    }

    return odd_number;
    
}

int main(){
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--)
    {
        /* code */
        int num[101];
        int i, number_of_digits;
        scanf("%d", &number_of_digits);
        for (i = 0; i < number_of_digits; i++){
            scanf("%d", &num[i]);
        }

        count_of_odds(num, number_of_digits);
        printf("%d\n", count_of_odds(num, number_of_digits));

    }
    return 0;
}