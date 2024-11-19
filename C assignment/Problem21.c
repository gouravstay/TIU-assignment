#include <stdio.h>

int main() {
    char source[100];  // Array to hold the source string
    char destination[100]; // Array to hold the copied string
    int i = 0; // Loop counter

    // Input the source string from the user
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin); // Read a string with spaces

    // Remove the newline character if present
    source[strcspn(source, "\n")] = '\0';

    // Manually copy the string from source to destination
    while (source[i] != '\0') { // Iterate until the null terminator is found
        destination[i] = source[i]; // Copy character by character
        i++; // Move to the next character
    }

    destination[i] = '\0'; // Null-terminate the destination string

    // Display the copied string
    printf("Copied string: %s\n", destination);

    return 0; // Return success
}
