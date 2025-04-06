/*31.	Write a program to read from a text file and count the number of lines and characters in that file.*/
#include <stdio.h>
int main(){
    FILE *fptr;
    int countChar=0;
    int countLine=0;
    fptr=fopen("test.txt","r");
    if(fptr==NULL){
        puts("Error:");
    }

    char ch;
    ch=fgetc(fptr);
    while (ch!=EOF)
    {
        countChar++;
        if(ch=='\n'){
            countLine++;
        }
        ch=fgetc(fptr);
    };

    if (countChar > 0 && ch != '\n') {
        countLine++;
    }
    printf("Characters:%d \n",countChar);
    printf("Line:%d",countLine);
    


    fclose(fptr);
    return 0;
}