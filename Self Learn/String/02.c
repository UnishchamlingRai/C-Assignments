//
#include <stdio.h>
int main(){
    char name[100];
    puts("Enter your Name:");
    fgets(name,100,stdin);
    puts(name);

    return 0;
}