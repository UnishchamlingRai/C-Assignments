//13.	WAP to check whether a given number is palindrome or not.
#include <stdio.h>
int main(){
    int num,rev=0,rem,orgNum;

    printf("Enter a number:");
    scanf("%d",&num);
    orgNum=num;

    while (num>0)
    {
        rem=num%10;
        rev=rem+(rev*10);
        num=num/10;
    }
    if(orgNum==rev){
        printf("%d is a Palindrome Number:",orgNum);
    }else{
        printf("%d is not a Palindrome Number:",orgNum);
    }
}