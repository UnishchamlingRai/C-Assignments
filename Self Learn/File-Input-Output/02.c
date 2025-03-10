/*
Reading from a file
char ch;
fscanf(fptr,"%c",&ch);
*/
#include <stdio.h>
#include <string.h>
int main(){
    FILE *fptr;
    fptr=fopen("hello.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);

    return 0;
}