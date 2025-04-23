#include <stdlib.h>
#include <stdio.h>

int count_of_local_minimum(int *numbers, int length){
    int count = 0;

    for(int i = 1; i < length - 1; i++){
        if(numbers[i] < numbers[i - 1] && numbers[i] < numbers[i + 1]){
            count++;
        }
    }

    return count;
}

int main(){
    int n;
    

    while(scanf("%d", &n) != EOF){
        int number[11];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &number[i]);
        }

        printf("%d", count_of_local_minimum(number, n));
    }
    
    return 0;
}