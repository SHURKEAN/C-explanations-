    #include <stdint.h>
    #include <stdio.h>



    int is_palindrome(int *numbers, int length){
        int palindrome = 1;
        int left = 0;
        int right = length - 1;

        while (left < right){
            if(numbers[left] != numbers[right]){
                palindrome = 0;
                break;
            }

            left++;
            right--;
        }
        return palindrome;
        
    }
    int main(){
        int test_Cases;
        scanf("%d", &test_Cases);

        while(test_Cases != 0){
            int length;
            int num[25];

            scanf("%d", &length);
            for(int i = 0; i < length; i++){
                scanf("%d", &num[i]);
            }

            is_palindrome(num, length);
            if(is_palindrome(num, length)){
                printf("True\n");
            }else{
                printf("False\n");
            }
            test_Cases--;

        }

        return 0;
    }