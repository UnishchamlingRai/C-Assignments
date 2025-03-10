//Write a program that reads two numbers and divide the first number by second number. If the division not possible print "Division not possible".
#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter a first Number:");
    scanf("%d",&num1);
    printf("Enter a Second Number:");
    scanf("%d",&num2);

    if(num1 % num2==0){
        printf("Devision is Possible");
    }else{
        printf("Devision is not Possible");
    }
    return 0;
}