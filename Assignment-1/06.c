//Write a C program that accepts three integers and find the maximum of three.

#include <stdio.h>
int main(){
    int num1,num2,num3,maxNum;
    printf("Enter any three Integers Number: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3){
        maxNum=num1;

    }else if(num2>num1 && num2>num3){
        maxNum=num2;
    }else if(num3>num1 && num3>num2){
        maxNum=num3;
    }else{
        printf("All Three Number are Equall.");
        return 0;
    }
    
        printf("From the number %d, %d and %d the Maximum number is: %d ",num1,num2,num3,maxNum);
    
    return 0;
}