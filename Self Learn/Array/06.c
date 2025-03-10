//Write a function to reverse a array.
#include <stdio.h>
void reverse(int nums[], int n);
int main(){
    int numbers[]={1,2,3,4,5};
    reverse(numbers,5);

    for(int i=0; i<5; i++){
        printf("%d \n",numbers[i]);
    }
    return 0;

}


void reverse(int nums[], int n){
    
    for(int i=0; i<n/2; i++){
        int firstValue=nums[i];
        int secondValue=nums[n-i-1];
        nums[i]=secondValue;
        nums[n-i-1]=firstValue;
    }

}