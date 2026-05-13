#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int greatest = arr[0]; // Initialize greatest to the first element
    
    for (i = 1; i < n; i++) {
        if (arr[i] > greatest) {
            greatest = arr[i]; // Update greatest if a larger element is found
        }
    }
    
    printf("The greatest element in the array is: %d\n", greatest);
    
    return 0;
}