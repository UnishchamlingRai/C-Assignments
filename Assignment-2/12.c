//12.	WAP to check whether a given number is Armstrong number or not
#include <stdio.h>
#include <math.h>
int main(){
    //1*1*1 + 5*5*5 + 3*3*3
    int num, armstrong=0,r,orgNum;
    
    printf("Enter a number:");
    scanf("%d",&num);
    orgNum=num;

    printf("num:%d \n",num);
    while (num>0)
    {
       r=num%10;
       armstrong=(r*r*r)+armstrong;
       num=num/10;
    }
   if(orgNum==armstrong){
    printf("%d is a Armstrong number:",orgNum);
   }else{
     printf("%d is a Armstrong number:",orgNum);
   }
    
    
return 0;

}