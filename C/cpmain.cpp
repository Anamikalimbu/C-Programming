#include <stdio.h>
int main() {
    char demands[5][50]; 
    printf("Enter 5 demands from the customer:\n");
    for (int i = 0; i < 5; i++) {
        printf("Demand %d: ", i + 1);
        fgets(demands[i], 50, stdin); 
    }

    printf("\nCustomer demands:\n");
    for (int i = 0; i < 5; i++) {
        printf("Demand %d: %s", i + 1, demands[i]);
    }

    printf("\n\nProcessing demands...\n");
    for (int i = 0; i < 5; i++) {
        switch (i) {
            case 0:
                printf("Processing demand 1: %s", demands[i]);
                break;
            case 1:
                printf("Processing demand 2: %s", demands[i]);
                break;
            case 2: 
             printf("Processing demand 3: %s", demands[i]); 
             break; 
            case 3:
             printf("Processing demand 4: %s", demands[i]);
             break;
            case 4: 
             printf("Processing demand 5: %s", demands[i]); 
            break; 
            default: 
            printf("Invalid demand!"); } printf("\n"); } 
            return 0; 
}
 
