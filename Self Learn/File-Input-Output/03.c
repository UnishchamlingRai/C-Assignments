//Write to a File
/*
char ch='A';
fprintf(fptr,"%c",ch);
*/

#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("hello.txt","w");
    char ch='B';
    fprintf(fptr,"%c","M");
    fprintf(fptr,"%c","A");
    fprintf(fptr,"%c","M");
    fprintf(fptr,"%c","M");

    fclose(fptr);
    return 0;
}