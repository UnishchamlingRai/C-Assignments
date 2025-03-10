//20.	Write a program to find factorial of given integer using recursion.
#include <stdio.h>
int calFact(int num);
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    int fact=calFact(num);

    printf("Factoril:%d",fact);
    
    return 0;
}

int calFact(int num){
    if(num==1){
        return 1;
    }
   return calFact(num-1)*num;
}

//5*24
//4*6=24
//3*2=6
//2*1=2
//1*1=1