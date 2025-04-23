#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int is_perfect_square(int x){
    int s = 1;

    while(s * s <= x){
        if(s * s == x){
            return 1;
        }
        s++;
    }
    return 0;
}


int count_of_square(int *numbers, int length){
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if(is_perfect_square(numbers[i])){
            count++;
        }
    }
    return count;
}


int main(){
    
    while (1)
    {
        int number[11];
        int number_of_digits;
        scanf("%d", &number_of_digits);

        if(number_of_digits == 0){
            break;
        }
        for (int i = 0; i < number_of_digits; i++)
        {
            scanf("%d", &number[i]);
        }


        printf("%d\n", count_of_square(number, number_of_digits));        
    }
    
    return 0;
}