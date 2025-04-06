/*
26.	Write a program to pass array to a function using pointer and return array from a function using pointer.
*/
int* returnPointerArr(int* arr);
#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *resultArr=returnPointerArr(arr);

    for(int i=0; i<5; i++){
        printf("%d ",resultArr[i]);
    }
return 0;
}

int* returnPointerArr(int* arr){
   static int newArr[5];
    for(int i=0; i<5; i++){
        newArr[i]=arr[i]*2;
    }

    return newArr;
}
