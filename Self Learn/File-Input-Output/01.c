//File Pointer
/*
FILE is a (hidden) structure that needs to be created for opening a file
A FILE  ptr that points to this stracture and is used to access the file.
FILE *fptr;


//Opening a File
FILE *fptr;
fptr=fopen("filename",mode);

Closing a File
fclose(fptr);
*/
#include <stdio.h>
#include <string.h>
int main(){
    //Check if a file exists before reading form it.

    FILE *fptr;
    fptr=fopen("hello.txt","r");
    if (fptr==NULL){
        printf("File doesn't exist.");
    }
    fclose(fptr);
    return 0;
}