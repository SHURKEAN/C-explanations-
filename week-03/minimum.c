#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers;
    int min;

    scanf("%d", &min);
    for(int i = 1; i < n; i++){
        
        scanf("%d", &numbers);

        if(numbers < min){
            min = numbers;
        }
    }

    printf("%d", min);
    return 0;
}