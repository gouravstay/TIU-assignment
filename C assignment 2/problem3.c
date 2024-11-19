#include <stdio.h>

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the factors of the number
    printf("Factors of %d are: ", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


// print sum of a number 
// print factorial of a number 
// print factors of a number 
// check a number is palindrome or not