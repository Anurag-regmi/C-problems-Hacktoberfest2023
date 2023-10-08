#include <stdio.h>

int main() {
    int num;

    // Read a number from the keyboard
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    // Check for prime or composite
    int isPrime = 1;
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is a composite number.\n", num);
    }

    return 0;
}
