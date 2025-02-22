#include <stdint.h>
#include <stdio.h>


int main(){

    while (1)
    {
        /* code */
        int a,b,c,d;

        scanf("%d %d %d %d", &a,&b,&c,&d);
    
    
        double lhs = (double)a * b;
        double rhs = (double)c * d;
        if(lhs > rhs){
            printf("<\n");  
        } else if(lhs < rhs){
            printf(">\n");
        } else {
            printf("=\n");
        }

        
    }
    
    return 0;

}