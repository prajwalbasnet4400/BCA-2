// WAP to read two matrices of order 3 * 2, add them and
// display the resultant matrix in matrix form

int main(){
    int mat1[3][2],mat2[3][2],mat3[3][2];
    // Input for Matrix 1
    printf("Matrix 1\n");
    for (int i=0; i < 3; i++){
            printf("Enter: ");
            scanf(" %d %d", &mat1[i][0], &mat1[i][1]);
            printf("\n");
    };
    // Input for Matrix 2
    printf("Matrix 2\n");
    for (int i=0; i < 3; i++){
            printf("Enter: ");
            scanf(" %d %d", &mat2[i][0], &mat2[i][1]);
            printf("\n");
    };
    // Add them 
    for (int i=0; i < 3; i++){
        mat3[i][0] = mat1[i][0] + mat2[i][0];
        mat3[i][1] = mat1[i][1] + mat2[i][1];
    };
    printf("Sum is: \n");
    for (int i=0; i < 3; i++){
     printf("| %d %d |\n",mat3[i][0], mat3[i][1]);
    }
};