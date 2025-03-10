//Pointer to pointer
#include <stdio.h>
int main(){
    // int price=40;
    // int *ptr=&price;
    // int **pptr=&ptr;

    // printf("%u \n",pptr);
    // printf("%u\n",&ptr);
    // printf("%d",**pptr);

    //Print the value of "i" from its pointer to pointer;
    int i=80;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d",**pptr);
    return 0;
}