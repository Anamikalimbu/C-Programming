#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Anamika"; // Replace "yourname" with the actual name

    printf("Original name: %s\n", name);

    int length = strlen(name);
    for (int i = 0; i < length - 1; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (name[i] > name[j]) {
                // Swap characters if they are out of order
                char temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    printf("Name in ascending order: %s\n", name);

    return 0;
}
