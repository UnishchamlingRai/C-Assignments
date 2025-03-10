// Print the numbers from 0 to n, if n is given by user.
#include <stdio.h>
int main(){
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        printf("%d \t",i);
    }

    printf("\n");
    int j=0;
    while(j<=n){
        printf("%d \t",j);
        j++;
    }
 printf("\n");
    int k=0;
    do{
        printf("%d /t",k);
        k++;
    }while(k<=n);



    return 0;

}