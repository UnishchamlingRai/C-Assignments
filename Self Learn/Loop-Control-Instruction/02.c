//Print the sum of First n Natural Number. Also, print them in reverse;
#include <stdio.h>
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
   printf("Sum is:%d \n",sum);
   for(int i=n; i>=1; i--){
    printf("%d \n",i);
   }

    return 0;
}