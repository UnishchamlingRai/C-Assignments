//Multidimensional Array
//2 D Array
//write a function to count the number of odd numbers in an array.
#include <stdio.h>
int countOdd(int numbers[],int n);

int main(){
    int numbers[]={1,2,3,4,5};
    
    printf("Number of odd:%d",countOdd(numbers,5));
    return 0;
}

int countOdd(int num[],int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(num[i] % 2!=0){
            count++;
        }
    }
   
   return count;

    // return odd;
}