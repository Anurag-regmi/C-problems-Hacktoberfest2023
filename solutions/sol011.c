#include <stdio.h>

int main() {
    char letter;

    // Using a while loop
    letter = 'z';
    while (letter >= 'a') {
        printf("%c ", letter);
        letter--;
    }
    printf("\n");

    // Using a do-while loop
    letter = 'z';
    do {
        printf("%c ", letter);
        letter--;
    } while (letter >= 'a');
    printf("\n");

    // Using a for loop
    for (letter = 'z'; letter >= 'a'; letter--) {
        printf("%c ", letter);
    }
    printf("\n");

    return 0;
}
