#include <stdint.h>
#include <stdio.h>

int main(){

    int a,b;
    char op;

    printf("Input the first number: ");
    scanf("%d", &a);

    printf("Input the operator: ");
    scanf(" %c", &op);

    printf("Input the second number: ");
    scanf("%d", &b);


    switch (op)
    {
    case '+':
        printf("%d + %d = %d", a, b, a+b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a-b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a*b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a/b);
        break;
    default:
        break;
    }

    return 0;
}