#include <stdio.h>

int main() {
    int i;

    // Using a while loop with break
    printf("Using a while loop with break:\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);
        if (i == 5) {
            break; // Exit the loop when i equals 5
        }
        i++;
    }
    printf("\n");

    // Using a do-while loop with break
    printf("Using a do-while loop with break:\n");
    i = 1;
    do {
        printf("%d ", i);
        if (i == 5) {
            break; // Exit the loop when i equals 5
        }
        i++;
    } while (i <= 10);
    printf("\n");

    // Using a for loop with break
    printf("Using a for loop with break:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
        if (i == 5) {
            break; // Exit the loop when i equals 5
        }
    }
    printf("\n");

    return 0;
}
