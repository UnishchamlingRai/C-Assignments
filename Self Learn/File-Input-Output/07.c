//2 numbers a and b, are written in a file. Write a program to replace them with their sum.
#include <stdio.h>
int main(){
    FILE *fptr;

    fptr=fopen("sum.txt","r");
    if(fptr==NULL){
        printf("file does not Exit");
    }
    int num1,num2;
    fscanf(fptr,"%d",&num1);
    fscanf(fptr,"%d",&num2);
    
    int sum=num1+num2;
    fclose(fptr);
    fptr=fopen("sum.txt","w");
    fprintf(fptr,"%d",sum);
    fclose(fptr);


    
    return 0;
    }