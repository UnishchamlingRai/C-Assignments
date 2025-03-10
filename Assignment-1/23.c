// //Write a C program that prints all even numbers between 1 and 50.
#include <stdio.h>
// int main(){
//     for(int i=1; i<=50; i++){
//         if(i%2==0){
//             printf("%d \t",i);
//         }
//     }
// }

int main(){
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        if(i%2==0){
            printf("%d \t",i);
        }
    }
}