// WAP to read a matrix, calculate transpose of it & display the result.

int main(){
    int mat1[2][2],mat2[2][2];
    // Input for Matrix 1
    printf("Matrix 1\n");
    for (int i=0; i < 2; i++){
            printf("Enter: ");
            scanf(" %d %d", &mat1[i][0], &mat1[i][1]);
            printf("\n");
    };
    mat2[0][0] = mat1[0][0];
    mat2[0][1] = mat1[1][0];
    mat2[1][0] = mat1[0][1];
    mat2[1][1] = mat1[1][1];
    
    printf("Transpose is: \n");
    for (int i=0; i < 2; i++){
     printf("| %d %d |\n",mat2[i][0], mat2[i][1]);
    }
};