#include <stdio.h>

// Recursive function to calculate the sum of first n natural numbers
int sumOfNaturalNumbers(int n) {
    // Base case: if n is 0, return 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: n + sum of the previous number
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;

    // Input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Call the recursive function and display the result
    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumOfNaturalNumbers(n);
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}
