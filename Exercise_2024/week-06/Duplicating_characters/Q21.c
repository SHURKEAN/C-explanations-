#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



void double_uppers(char *letter){

}



int main(){

    char letter[256];


    while (fgets(letter, sizeof letter, stdin) != NULL) {

        double_uppers(letter);
    }

    return 0;
}