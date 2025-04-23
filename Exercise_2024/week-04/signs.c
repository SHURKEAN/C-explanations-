#include <stdint.h>
#include <stdio.h>


int main(){
    
    int line = 1;

    while(1){
        int n;
        scanf("%d",&n);

        if (n == 0){
            break;
        }

        int pos_count = 0, neg_count = 0;

        for(int i = 0; i < n; i++){
            int number;
            scanf("%d",&number);

            if(number > 0){
                pos_count++;
            }else if(number < 0) {
                neg_count++;
            }

        }

        if(pos_count > neg_count){
            printf("%d\n", line);
        }

        line++;
    }


    return 0;
}