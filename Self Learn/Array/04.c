//Array as Function Argument.

#include <stdio.h>
void printNumbers(int *ptr, int n);
int main(){
    int numbers[5]={1,2,3,4,5};
    printNumbers(numbers,5);

    return 0;
}

void printNumbers(int *ptr,int n){

    for(int i=0; i<n; i++){
        printf("%d \t",*ptr+i);
    }

}