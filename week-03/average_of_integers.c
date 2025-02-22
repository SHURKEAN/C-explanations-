#include <stdint.h>
#include <stdio.h>


int main(){
    int n;
    printf("Indicate the number of test cases");
    scanf("%d", &n);
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number;
    }

    double avreage = (double)sum / n;

    printf("%.2f", avreage);
    return 0;
}