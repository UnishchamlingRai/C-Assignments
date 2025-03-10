//Pointer in Function call
/*
1) Call by Value
=) We pass value of variable as argument.

2) Call by Reference
=) We pass address of variable as argument.
*/

void square(int n);//Call by Value Example
void _square2(int* n);//Call by Reference Example

#include <stdio.h>
int main(){
    int n=4;
    square(n);
    printf("Square:%d\n",n);

    _square2(&n);
    printf("square2:%d \n",n);


    return 0;
}

void square(int n){//Call by Value Example
    n=n*n;
    printf("Square:%d \n",n);
}

void _square2(int* n){//Call by Reference Example

    *n=(*n)* (*n);
    printf("Square2:%d\n",*n);
}