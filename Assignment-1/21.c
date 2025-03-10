//Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number
#include <stdio.h>
int main(){
    int num;
    int rem=0;
    int sumOfDigit=0;
    printf("Enter any number less then 500:");
    scanf("%d",&num);
    if(num>500){
        printf("Number is greater then 500 please enter number less then 500");
        return 0;
    }
    while (num!=0)
    {
        rem=num%10;//456=
        sumOfDigit=sumOfDigit+rem;
        num=num/10;
    }

    printf("The sum of the digits is: %d",sumOfDigit);
    
}