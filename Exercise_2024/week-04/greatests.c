#include <stdint.h>
#include <stdio.h>


int main(){
    while(1){
        int n;
        scanf("%d", &n);
        
        int number;
        scanf("%d", &number);
        int highest_value = number;
        int appear = 1;
        for(int i = 1; i < n; i++){
            scanf("%d", &number);
            if(number > highest_value){
                highest_value = number;
                appear = 1;
            }else if (highest_value == number){
                appear++;
            }
        }

        printf("%d\n", appear);
    }
    return 0;
}