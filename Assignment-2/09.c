//9.	WAP to find sum of diagonal elements of a square matrix.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the size of Square maxtrix");
    scanf("%d",&n);

    int matrix[n][n];

//inputing matrix value;
printf("Enter the value of matrix\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

//printing maxtirx value;
printf("---maxtrix with value---\n");
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}
//outputing the sum;
for(int i=0; i<n; i++){
    sum=sum+matrix[i][i];
}
printf("sum of diagonal elements of a square matrix is:%d",sum);

    return 0;
}
