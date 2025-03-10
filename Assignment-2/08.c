//8.Write a program to get input of two 3x3 matrices and find out the sum and product of the matrices and display the result of sum and product.
#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3], product[3][3];
    int i, j, k;

    // Input first matrix
    printf("Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    //Display inputed matrix
    printf("---Inputed matrix-1----- \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("---Inputed matrix-2----- \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    // Compute the sum of matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Compute the product of matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            product[i][j] = 0; // Initialize product matrix element to 0
            for (k = 0; k < 3; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the sum of matrices
    printf("\nSum of the matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Display the product of matrices
    printf("\nProduct of the matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
