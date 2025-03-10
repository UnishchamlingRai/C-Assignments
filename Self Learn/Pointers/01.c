#include <stdio.h>
int main(){
    int age=20;
    int *ptr=&age;
    printf("%u \n",&age);
    printf("%u \n",ptr);
    printf("%d \n",*ptr);
    printf("%d \n",*(&age));
    return 0;
}