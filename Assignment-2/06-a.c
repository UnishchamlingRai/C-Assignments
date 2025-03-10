//6) 6.	Write a program in C to make following pattersn of astrisk(*) below using loop.
/*
*
* *    
* * *
* * * *
*/
#include <stdio.h>
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

return 0;
}