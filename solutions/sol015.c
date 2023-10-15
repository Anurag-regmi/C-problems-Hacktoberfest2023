#include <stdio.h>
#include <stdlib.h>

// Function to convert a number to the Indian system of numeration
void convertToIndianSystem(long long int num) {
    char* suffix[] = {"", "thousand", "lakh", "crore"};
    int index = 0;

    if (num == 0) {
        printf("Zero");
        return;
    }

    while (num > 0) {
        long long int part = num % 100;
        if (part > 0) {
            printf("%lld %s ", part, suffix[index]);
        }
        index++;
        num /= 100;
    }
}

// Function to convert a number to the international system of numeration
void convertToInternationalSystem(long long int num) {
    char* suffix[] = {"", "thousand", "million", "billion"};
    int index = 0;

    if (num == 0) {
        printf("Zero");
        return;
    }

    while (num > 0) {
        long long int part = num % 1000;
        if (part > 0) {
            printf("%lld %s ", part, suffix[index]);
        }
        index++;
        num /= 1000;
    }
}

int main() {
    long long int number;

    printf("Enter a number: ");
    scanf("%lld", &number);

    printf("Formatted number with commas: %'lld\n", number);

    printf("In Indian System: ");
    convertToIndianSystem(number);

    printf("\nIn International System: ");
    convertToInternationalSystem(number);

    return 0;
}
