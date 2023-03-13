// 8-1 WAP to read two matrices of order 3 * 2, add them and display the resultant
// matrix in matrix form.

#include<stdio.h>

int main () {
    int mat1[3][2],mat2[3][2],result[3][2];

    // Read input for matrix1
    for (int i=0;i<3;i++){
        printf("input data for matrix 1, row %d: ",i);
        scanf(" %d %d",&mat1[i][0],&mat1[i][1]);

    };
    // Read input for matrix2
    for (int i=0;i<3;i++){
        printf("input data for matrix 2, row %d: ",i);
        scanf(" %d %d",&mat2[i][0],&mat2[i][1]);
    };

    // Add the two marix
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        };
    };

    // display the matrix
    printf("Resltant matrix: \n");
    for (int i=0;i<3;i++){
        printf(" %d %d \n",result[i][0],result[i][1]);
    };
}
