//Create a String FirstName and LastName to store details of user and print all the characters using a loop.
#include <stdio.h>
void printString(char arr[]);
int main(){
    char firstName[]="Unish";
    char lastName[]="Rai";
printString(firstName);
printf("\n");
printString(lastName);

}

void printString(char arr[]){
    int i=0;

    while (arr[i]!='\0')
    {
printf("%c \t",arr[i]);
i++;
    }
    
}