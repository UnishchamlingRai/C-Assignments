//write a program to find if a character entered by user is upper case or not;
#include <stdio.h>
int main(){
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    }else if(ch>='a' && ch<='z'){
        printf("Lower Case");
    }else{
        printf("Not a english Letter");
    }
}