//Sum of first n natural numbers.
#include <stdio.h>
int sum(int n);
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
int result=sum(n);
return 0;
}

int sum(int n){
    if(n==1){
        return;
    }
}