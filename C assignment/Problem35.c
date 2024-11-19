#include <stdio.h>

#define MAX_SIZE 10 // Define maximum size for the matrices

int main() {
    int first[MAX_SIZE][MAX_SIZE], second[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rowFirst, colFirst, rowSecond, colSecond;

    // Get the dimensions of the first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);

    // Get the dimensions of the second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);

    // Check if multiplication is possible
    if (colFirst != rowSecond) {
        printf("Matrix multiplication not possible. Number of columns in first matrix must equal number of rows in second matrix.\n");
        return 1; // Exit if multiplication is not possible
    }

    // Input for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colFirst; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < colSecond; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // Initialize the result matrix to zero
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            for (int k = 0; k < colFirst; k++) {
                result[i][j] += first[i][k] * second[k][j]; // Multiply and sum
            }
        }
    }

    // Display the result
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
