#include <stdio.h>

#define MAX_SIZE 10 // Define maximum size for the matrices

int main() {
    int row, col; // Variables to store the number of rows and columns
    int matrixA[MAX_SIZE][MAX_SIZE]; // First matrix
    int matrixB[MAX_SIZE][MAX_SIZE]; // Second matrix
    int sum[MAX_SIZE][MAX_SIZE]; // Resultant matrix to store the sum

    // Get the dimensions of the matrices
    printf("Enter the number of rows and columns (max %d): ", MAX_SIZE);
    scanf("%d %d", &row, &col);

    // Input for the first matrix
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j]; // Element-wise addition
        }
    }

    // Display the resultant sum matrix
    printf("Sum of matrix A and B:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
