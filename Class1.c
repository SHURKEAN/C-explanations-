// gcc -> functions such as gcc -S or gcc -E 


#define SUCCESS 0
#include <stdio.h>

int puts(const char * p);

int main(){
        puts("Hello world");
        return SUCCESS;
}


// commands -> gcc - E main.c > main.e.c