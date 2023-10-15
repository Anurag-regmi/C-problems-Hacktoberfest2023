#include <stdio.h>

int main() {
    int count = 0;

    printf("Using a while loop:\n");
    while (1) {
        if (count >= 100)
            break;
        printf("HAPPY BIRTHDAY\n");
        count++;
    }

    count = 0;  // Reset the count

    printf("\nUsing a do-while loop:\n");
    do {
        if (count >= 100)
            break;
        printf("HAPPY BIRTHDAY\n");
        count++;
    } while (1);

    count = 0;  // Reset the count

    printf("\nUsing a for loop:\n");
    for (int i = 0; ; i++) {
        if (count >= 100)
            break;
        printf("HAPPY BIRTHDAY\n");
        count++;
    }

    return 0;
}
