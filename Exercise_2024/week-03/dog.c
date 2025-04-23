#include <stdint.h>
#include <stdio.h>


int main(){


    int h,l,dog,people;

    while(scanf("%d%d", &h , &l) != EOF){
        dog = (l - 2*h) / 2;
        people = (4*h - l) / 2;
        printf("%d %d", dog, people);
    }
    return 0;
}