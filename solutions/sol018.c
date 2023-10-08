#include <stdio.h>

int main() {
    double num1, num2, num3;

    // Read three numbers from the keyboard
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the third number: ");
    scanf("%lf", &num3);

    // Compare and find the greatest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The greatest number is %.2lf\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The greatest number is %.2lf\n", num2);
    } else {
        printf("The greatest number is %.2lf\n", num3);
    }

    return 0;
}
