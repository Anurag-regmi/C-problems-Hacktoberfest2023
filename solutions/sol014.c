#include <stdio.h>

// Function to convert decimal to Roman numeral
void decimalToRoman(int num) {
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    if (num <= 0 || num > 999999999) {
        printf("Invalid input. Enter a number between 1 and 999999999.\n");
        return;
    }

    printf("Roman numeral equivalent: ");

    for (int i = 0; i < 13; i++) {
        while (num >= decimal[i]) {
            printf("%s", roman[i]);
            num -= decimal[i];
        }
    }

    printf("\n");
}

int main() {
    int num;

    // Read a number from the user
    printf("Enter a number (up to 9 digits): ");
    scanf("%d", &num);

    // Convert and print Roman numeral
    decimalToRoman(num);

    return 0;
}
