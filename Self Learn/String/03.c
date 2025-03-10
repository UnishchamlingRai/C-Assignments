//String Using Pointer
/*
char *str="Hellow world";
//Store string in memory and the assigned address is stored in the char pointer 'str';

char *str="Hello world";//Can be reinitialized
char str[]="Hello world"; // cannot be reinitialized.
*/

#include <stdio.h>
int main(){
    char firstname[]="Unish";
    // firstname[]="Uni";

    char *lastName="rai";
    printf("%s",lastName);
    lastName="Hello";
    printf("%s",lastName);
    return 0;
}