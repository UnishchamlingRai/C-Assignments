//Changes to parameter in function don't change the values in calling function.
//Because a copy of argument is passed to the function.
#include <stdio.h>
int sum(int value);
int main(){
    int value=10;
    sum(value);
    printf("sum:%d\n",value);//update in sum function does not change the value 
    return 0;
    
}
int sum(int value){
    value=value+5;
    printf("sum:%d \n",value);
}
