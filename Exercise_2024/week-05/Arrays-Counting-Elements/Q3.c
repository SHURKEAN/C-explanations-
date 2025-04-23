#include <stdio.h>
#include <stdlib.h>

int count_of_odds(int *number, int length){
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (number[i] % 2 != 0) {
            count++;
        }
    }

    return count;

}


int main(){

    int test_cases;
    while(scanf("%d", &test_cases)){
        if(test_cases == 0){
            break;
        }
        int numbers[101];
        for (int i = 0; i < test_cases; i++) {
            scanf("%d", &numbers[i]);
        }
        printf("%d\n", count_of_odds(numbers, test_cases));
    }
    return 0;
}