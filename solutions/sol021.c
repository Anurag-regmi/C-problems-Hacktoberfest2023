#include <stdio.h>

int main() {
    double num1, num2;

    // Read two numbers from the keyboard
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Compare and find the greater number
    if (num1 > num2) {
        printf("%.2lf is greater than %.2lf\n", num1, num2);
    } else if (num2 > num1) {
        printf("%.2lf is greater than %.2lf\n", num2, num1);
    } else {
        printf("Both numbers are equal: %.2lf\n", num1);
    }

    return 0;
}
