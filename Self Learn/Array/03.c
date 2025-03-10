#include <stdio.h>

int main(){
   int marks[5];
   int *ptr=&marks[0];

   for(int i=0; i<5; i++){
    printf("%d index: \n",i+1);
    scanf("%d",ptr+i);
   }

   for(int i=0; i<5; i++){
    printf("%d \t",*ptr+i);
   }
    return 0;
}