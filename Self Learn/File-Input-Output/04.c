//EOF (End of File)
// fgetc returns EOF to show that the file has ended.
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("hello.txt","r");
    char ch;
    ch=fgetc(fptr);
    while (ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    };

    fclose(fptr);
    return 0;
    
}