#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



void double_lowers(char *letter){

    for (int i = 0; letter[i] != '\0'; i++)
    {
        if(letter[i] >= 'a' && letter[i] <= 'z'){
            printf("%c%c", letter[i], letter[i]);
        }else{
            printf("%c", letter[i]);
        }
    }
    

}

int main(){
    int test_cases;
    scanf("%d", &test_cases);
    getchar();
    char letter[100];

    for(int i = 0; i < test_cases; i++){
        fgets(letter, sizeof letter, stdin);
        double_lowers(letter);
    }
    
    return 0;
}