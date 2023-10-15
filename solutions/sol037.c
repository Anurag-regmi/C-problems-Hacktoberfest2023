#include <stdio.h>

int main() {
    int n;

    // Demonstrate the 'continue' statement with a 'while' loop
    printf("Using 'while' loop:\n");
    n = 1;
    while (n <= 5) {
        if (n == 3) {
            n++;  // Increment n to avoid an infinite loop
            continue;  // Skip the current iteration (n=3)
        }
        printf("%d ", n);
        n++;
    }
    printf("\n");

    // Demonstrate the 'continue' statement with a 'do-while' loop
    printf("\nUsing 'do-while' loop:\n");
    n = 1;
    do {
        if (n == 3) {
            n++;  // Increment n to avoid an infinite loop
            continue;  // Skip the current iteration (n=3)
        }
        printf("%d ", n);
        n++;
    } while (n <= 5);
    printf("\n");

    // Demonstrate the 'continue' statement with a 'for' loop
    printf("\nUsing 'for' loop:\n");
    for (n = 1; n <= 5; n++) {
        if (n == 3) {
            continue;  // Skip the current iteration (n=3)
        }
        printf("%d ", n);
    }
    printf("\n");

    return 0;
}
