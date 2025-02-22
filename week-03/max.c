#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    printf("Enter the number of elements: ");\
    scanf("%d", &n);

    int number;
    int max;

    scanf("%d", &max);

    for(int i = 1; i < n; i++){
        scanf("%d", &number);

        if(number > max){
            max = number;
        }
    }


    printf("%d", max);
    return 0;
}