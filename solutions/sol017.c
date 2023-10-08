#include <stdio.h>

int main() {
    int i;

    // Using a while loop for increasing order
    i = 1;
    printf("Numbers from 1 to 100 in increasing order:\n");
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Using a while loop for decreasing order
    i = 100;
    printf("Numbers from 100 to 1 in decreasing order:\n");
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    // Using a do-while loop for increasing order
    i = 1;
    printf("Numbers from 1 to 100 in increasing order (do-while):\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

    // Using a do-while loop for decreasing order
    i = 100;
    printf("Numbers from 100 to 1 in decreasing order (do-while):\n");
    do {
        printf("%d ", i);
        i--;
    } while (i >= 1);
    printf("\n");

    // Using a for loop for increasing order
    printf("Numbers from 1 to 100 in increasing order (for loop):\n");
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Using a for loop for decreasing order
    printf("Numbers from 100 to 1 in decreasing order (for loop):\n");
    for (i = 100; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
