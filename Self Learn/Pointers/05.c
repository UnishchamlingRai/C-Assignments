// Swap 2 numbers a and b using Pointers
#include <stdio.h>
void swap(int* a, int* b);
int main(){
    int a=3;
    int b=2;
    swap(&a,&b);
    printf("a= %d\n",a);
    printf("b= %d\n",b);

//     int *ptra=&a;
//     int *ptrb=&b;

// int tem=*ptra;
//     a=*ptrb;
//     b=tem;
//     printf("%d \n",a);
//     printf("%d \n",b);

    return 0; 
}

void swap(int* a, int* b){
    int temp=*a;
     *a=*b;
     *b=temp;
}