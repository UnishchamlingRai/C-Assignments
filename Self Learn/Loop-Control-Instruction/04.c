//Break and Continue;
#include <stdio.h>
int main(){
    int n;
    // for(int i=0; i<=5; i++){
    //     if(i==3){
    //         break;
    //     }
    //     printf("%d \n",i);
    // }
    // printf("End");
    //Keep taking numbers as input from user until user enter a odd number.
    do{
        printf("Enter number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2!=0){
            break;
        }
    }while(1);
printf("thank Your!");
    return 0;
}



