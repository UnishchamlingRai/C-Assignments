//Collection of similar data types stored at contiguous memory location.
//Pinter Arithmetic
//Pointer can be incremented and decremented
//Array is a Pointer.

#include <stdio.h>
int main(){
    float age=20;
    float *ptr=&age;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u\n",ptr);

}