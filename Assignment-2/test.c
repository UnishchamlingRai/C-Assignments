#include <stdio.h>
int main(){
    int num,isPrime=1;

    printf("Enter number:");
    scanf("%d",&num);

    for(int i=2; i<=num/2; i++){
        if(num % 2==0){
            isPrime=0;
            break;
        }
    }

    if(isPrime){
        printf("Prime:");
    }else{
        printf("not prime");
    }

    return 0;
}