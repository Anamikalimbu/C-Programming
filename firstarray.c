#include <stdio.h>

int main() {
    // Declare an array to store numbers
    int numbers[] = {5, 2, 8, 1, 7};

    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Display the original array
    printf("Original array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Modify the array (e.g., doubling each element)
    for (int i = 0; i < size; ++i) {
        numbers[i] *= 2;
    }

    // Display the modified array
    printf("Modified array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
