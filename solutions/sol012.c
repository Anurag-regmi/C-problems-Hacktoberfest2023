#include <stdio.h>

int main() {
    int count = 0;

    // Using a while loop to print "HAPPY BIRTHDAY" 100 times
    while (count < 100) {
        printf("HAPPY BIRTHDAY\n");
        count++;
    }

    // Using a do-while loop to print "HAPPY BIRTHDAY" 100 times
    count = 0;
    do {
        printf("HAPPY BIRTHDAY\n");
        count++;
    } while (count < 100);

    // Using a for loop to print "HAPPY BIRTHDAY" 100 times
    for (count = 0; count < 100; count++) {
        printf("HAPPY BIRTHDAY\n");
    }

    // Infinite loop to print "HAPPY BIRTHDAY" indefinitely
    while (1) {
        printf("HAPPY BIRTHDAY\n");
    }

    return 0;
}
