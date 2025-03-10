//Print the factorial of a number n.
// factorial of 5 is: 1x2x3x4x5=120; 2 6 24 
#include <stdio.h>
int main(){
    int n;
    int fact=1;
    printf("Enter number:");
    scanf("%d",n);
    for(int i=1; i<=5; i++){
        fact=fact*i;

    }
    printf("Factorial is:%d",fact);
}