/*
24.	Write a program to swap two numbers defining a function swap(int, int ) using:
a) Pass by value
b) Pass by reference

*/
#include <stdio.h>
void withPassByValue(int a, int b);
void withPassByReference(int *a, int *b);
int main(){
    int a, b;
    printf("Enter a frist Number:\n");
    scanf("%d",&a);
    printf("Enter a Second Number:\n");
    scanf("%d",&b);

    printf("Before Swaping Value a=%d b=%d \n",a,b);
    withPassByValue(a,b);
    printf("After Pass by value(No change in main):a=%d b=%d \n",a,b);
    withPassByReference(&a,&b);
    printf("After passByReference(Change in main) a=%d b=%d \n",a,b);


    
return 0;
}

void withPassByValue(int a, int b){
    int temp=a;
    a=b;
    b=temp;
printf("Inside WithPassByValue: a=%d b=%d \n",a,b);
}

void withPassByReference(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}