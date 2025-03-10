/*
18.	Write a program to  get a string as input and print the length of string, reverse of the string.
a.	Using String Library Function 
b.	Using your own function

*/

// with out using libary function
int countStr(char str[]);
void revStr(char str[],int len);
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter any string:");
    scanf("%s",str);
    int len=countStr(str);
    revStr(str,len);
printf("The length of String is:%d \n",len);
printf("The reverse string is:%s",str);
    return 0;

}

int countStr(char str[]){
    int count=0;
    while (str[count]!='\0')
    {
       count++;
    }
    return count;
}

void revStr(char str[],int len){
char temp;
for(int i=0; i<len/2; i++){
    char temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;
}
}