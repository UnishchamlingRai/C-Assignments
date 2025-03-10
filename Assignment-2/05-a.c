/*
Write algorithm and program to compute the followings using for, do while and while loop separately.
a.factorial of an integer N
b.computation of ab( a raised to power b) 
*/

//
#include <stdio.h>
int main(){
    int n;
    printf("Enter a nunber:");
    scanf("%d", &n);

    // Factorial using foor loop
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial=factorial*i;
    }
    printf("---Using For loop-------\n");
    printf("The factorial of %d is: %d \n",n,factorial);

//Factorail using while loop;
int count=1;
int whileFactorial=1;
while (count<=n)
{
    whileFactorial=whileFactorial*count;
    count++;
}
printf("---Using While loop-------\n");
printf("The factorial of %d is: %d \n",n,whileFactorial);


int num=1;
int dowhileFactorial=1;
do
{
  dowhileFactorial=dowhileFactorial*num;
  num++;
} while (num<=n);
printf("---Using Do While loop-------\n");
printf("The factorial of %d is: %d \n",n,dowhileFactorial);


    return 0;
}

