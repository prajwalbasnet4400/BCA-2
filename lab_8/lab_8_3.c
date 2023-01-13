// WAP to multiply two 3*3 matrices

int main(){
    int mat1[3][3],mat2[3][3];
    // Input for Matrix 1
    printf("Matrix 1\n");
    for (int i=0; i < 3; i++){
            printf("Enter: ");
            scanf(" %d %d %d", &mat1[i][0], &mat1[i][1], &mat1[i][2]);
            printf("\n");
    };
    // Input for Matrix 2
    for (int i=0; i < 3; i++){
        printf("Enter: ");
        scanf(" %d %d %d", &mat2[i][0], &mat2[i][1], &mat1[i][2]);
        printf("\n");
    };
    
    printf("Transpose is: \n");
    for (int i=0; i < 2; i++){
     printf("| %d %d |\n",mat2[i][0], mat2[i][1]);
    }
};