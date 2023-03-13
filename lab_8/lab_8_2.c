// 8-2 WAP to read a 2x2 matrix, calculate transpose of it & display the result.

#include<stdio.h>

int main () {
    int mat1[2][2],result[2][2];

    // Read input for matrix1
    for (int i=0;i<2;i++){
        printf("input data for matrix 1, row %d: ",i);
        scanf(" %d %d",&mat1[i][0],&mat1[i][1]);

    };

    // Calculate the transpose
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            result[j][i] = mat1[i][j];
        };
    };

    // display the matrix
    printf("Resltant matrix: \n");
    for (int i=0;i<2;i++){
        printf(" %d %d \n",result[i][0],result[i][1]);
    };
}
