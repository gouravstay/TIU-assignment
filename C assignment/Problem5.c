#include <stdio.h>

int main() {
    char ch;

    // Loop through characters from A to Z
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);  // Print each character followed by a space
    }

    printf("\n");  // New line after printing all characters
    return 0;
}
