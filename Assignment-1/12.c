//Write a C program to check a given integer is positive even, negative even, positive odd or negative odd.
#include <stdio.h>
int main(){
    int num;
    printf("Enter a integer Number: ");
    scanf("%d",&num);

    
    if(num>0){
        if(num%2==0){
            printf("%d is Positive Even",num);
        }else{
              printf("%d is Positive Odd",num);
        }

    }else{
         if(num%2==0){
            printf("%d is Negative Even",num);
        }else{
              printf("%d is Negative Odd",num);
        }

    }
    
}