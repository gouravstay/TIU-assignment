#include <stdio.h>
#include <string.h> // for strcat() and strlen()

int main() {
    char str1[100], str2[100]; // Arrays to hold the input strings

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); // Read a string with spaces

    // Remove the newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); // Read a string with spaces

    // Remove the newline character if present
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate the second string to the first
    strcat(str1, str2); // Append str2 to str1

    // Display the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0; // Return success
}
