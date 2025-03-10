//21.	Write a program to find first 10 numbers in Fibonacci series using recursion.

#include <stdio.h>
int main(){ //0 1 1
    int num;
    int a=0, b=1;
    printf("Enter a number:");
    scanf("%d",&num);

    for(int i=0; i<=num; i++){
        printf("%d ",a);//0
        int temp=a+b;//2
        a=b;//1
        b=temp;//2

    }
    return 0;
}