#include <stdio.h>

int main() {
    int number;

    // Using a while loop
    printf("Using a while loop:\n");
    number = 50;
    while (number <= 100) {
        if (number % 2 == 0) {
            printf("%d ", number);
        }
        number++;
    }
    printf("\n");

    // Using a do-while loop
    printf("Using a do-while loop:\n");
    number = 50;
    do {
        if (number % 2 == 0) {
            printf("%d ", number);
        }
        number++;
    } while (number <= 100);
    printf("\n");

    // Using a for loop
    printf("Using a for loop:\n");
    for (number = 50; number <= 100; number++) {
        if (number % 2 == 0) {
            printf("%d ", number);
        }
    }
    printf("\n");

    return 0;
}
