//Write a C program to reverse and print a given number
#include <stdio.h>
int main(){
    int num;
    int rem=0;
    int rev=0;
    printf("Enter any Number:");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%10;//456%10=45.6=which mudulo is 6
        rev=rev*10+rem; //0*10+7=6;
        num=num/10;//456/10=45.6 which roundoff to 45
        
    };
    printf("Reverse:%d",rev);
    
    return 0;
    

}
//rem=num%10
//rev=rev*10+rem