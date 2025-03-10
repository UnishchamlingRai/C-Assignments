//Array is a Pinter
#include <stdio.h>
int main(){
    int marks[5]={1,2,3,4,5};
    int *ptr=marks;
    int *ptr2=&marks[2];

    printf("%u \n",*ptr);
    printf("%u \n",*ptr2);
    for(int i=0; i<5; i++){
        printf("%u \n",*ptr++);
    }

    return 0;
}