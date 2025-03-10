//Recursion.
//print hello world 5 time using Recursion

#include <stdio.h>
void sayHello(int count);
int main(){
    
    sayHello(5);
    return 0;
}

void sayHello(int count){
    if(count==0){
        return;
    }
    printf("hello world");
    sayHello(count-1);
}