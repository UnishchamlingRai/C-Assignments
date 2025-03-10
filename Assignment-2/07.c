/*
7.Write a program using loop to print the following floyd's triangle as given below when input is n.
1
2 3
4 5 6
7 8 9 10
11 12 13 14    up to n rows
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
int num=1;
    for(int i=1; i<=n; i++){//outer loop for row
    //innter loop for coloum
        for(int j=1; j<=i; j++){
            printf("%d ",num);
            num=num+1;
        }
        printf("\n");
    }

    return 0;
}