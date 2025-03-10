//Find the salted from of a password entered by user if the salt is "123" added at the end.
#include <stdio.h>
#include <string.h>
int main(){
    char password[100];
    char salt[100]="123";
    puts("Enter your password:");
    gets(password);
    strcat(password,salt);
    puts(password);
    return 0;
}