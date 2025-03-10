//Write a C program that accepts two integers from the user and calculate the sum of the two integers.
#include <stdio.h>

int main(){
    int num1,num2;

    printf("Enter a First integer Number: ");
    scanf("%d",&num1);
    printf("Enter a Second integer Number: ");
    scanf("%d",&num2);

    int sum=num1+num2;

    printf("The sum of %d and %d is: %d",num1,num2,sum);

    return 0;

}