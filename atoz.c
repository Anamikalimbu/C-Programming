#include <stdio.h>

int main() {
    char currentChar;

    printf("Alphabet from 'a' to 'z':\n");

    for (currentChar = 'a'; currentChar <= 'z'; ++currentChar) {
        printf("%c ", currentChar);
    }

    printf("\n");

    return 0;
}
