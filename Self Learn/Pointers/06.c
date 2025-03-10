//Write a function to calculate the sum, product and averate of 2 numbers. Print that averate in the main function;

#include <stdio.h>
void calculate(int a, int b, int* sum,int* avg, int* prod);

int main(){
    int a=2;
    int b=4;
    int sum,avg,prod;
    calculate(a,b,&sum,&avg,&prod);

    printf("Sum:%d \n",sum);
    printf("avg:%d \n",avg);
    printf("prod:%d \n",prod);

    return 0;

}

void calculate(int a, int b,int *sum,int* avg, int* prod){
    *sum=a+b;
    *avg=*sum/2;
    *prod=a*b;
}