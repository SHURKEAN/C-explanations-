#include <stdint.h>
#include <stdio.h>

int main(){
    int a,b;
    char op;



    printf("Input the first number: ");
    scanf("%d", &a);

    printf("Input the operator: \n");
    scanf(" %c", &op);

    printf("Input the second number: ");
    scanf("%d", &b);

    if(op == '+'){
        printf("%d + %d = %d", a, b, a+b);
    }else if(op = '-'){
        printf("%d - %d = %d", a, b, a-b);
    }else if(op = '*'){
        printf("%d * %d = %d", a, b, a*b);
    }else if(op = '/'){
        printf("%d / %d = %d", a, b, a/b);
    }else{
        printf("Invalid operator");
    }

    return 0;
}