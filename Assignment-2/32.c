/*32.	Write a program to read a text file and copy all contents in the new file.*/
#include <stdio.h>
int main(){
    FILE *readFile, *copyFile;
    readFile=fopen("test.txt","r");

    copyFile=fopen("copy.txt","w");

    char ch=fgetc(readFile);
    while (ch!=EOF)
    {
        ch=fgetc(readFile);
        fputc(ch,copyFile);
    }

    fclose(readFile);
    fclose(copyFile);

    return 0;
    
}