#include <stdio.h>

int main() {
    char ch;

    // Using a while loop
    printf("Using a while loop:\n");
    ch = 'z';
    while (ch >= 'a') {
        printf("%c ", ch);
        ch--;
    }
    printf("\n");

    // Using a do-while loop
    printf("Using a do-while loop:\n");
    ch = 'z';
    do {
        printf("%c ", ch);
        ch--;
    } while (ch >= 'a');
    printf("\n");

    // Using a for loop
    printf("Using a for loop:\n");
    for (ch = 'z'; ch >= 'a'; ch--) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}
