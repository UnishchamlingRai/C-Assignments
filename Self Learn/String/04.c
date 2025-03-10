// Make a Program that inputs user's name and prints its length.
#include <stdio.h>
int countLength(char arr[]);
int main(){
    char firstName[100];
   puts("Enter Your firstName:");
   fgets(firstName,100,stdin);
int length=countLength(firstName);
printf("The length is: %d",length);

    return 0;

}
int countLength(char arr[]){
int i=0;
int count=0;
while (arr[i]!='\0')
{
    count++;
    i++;
}
return count-1;
}