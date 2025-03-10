//Write a C program that accepts principle, rate of interest, time and compute the simple interest.
#include <stdio.h>
int main(){
    int p,r,t,si;
    printf("Principle:");
    scanf("%d",&p);
    printf("Rate:");
    scanf("%d",&r);
    printf("Time:");
    scanf("%d",&t);

    si=(p*t*r)/100;
    printf("The simple interest is:%d",si);

    return 0;
}