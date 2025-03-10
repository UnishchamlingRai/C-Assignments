//Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.

#include <stdio.h>
int main(){
    int numbers;
    int positive=0,negative=0;
printf("Enter Five Numbers: \n");
    for(int i=0; i<5; i++){
        printf("Enter number %d: \n",i+1);
        scanf("%d",&numbers);
        if(numbers >=0){
            positive=positive+1;
        }else{
            negative=negative+1;
        }
    }

    printf("Positive = %d \n",positive);
    printf("Negative = %d \n",negative);
    return 0;
}