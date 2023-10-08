#include <stdio.h>

int main() {
    int num1, num2;

    // Read two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Using relational operators
    printf("Relational Operator Example:\n");
    printf("%d > %d is %d\n", num1, num2, num1 > num2);
    printf("%d < %d is %d\n", num1, num2, num1 < num2);
    printf("%d >= %d is %d\n", num1, num2, num1 >= num2);
    printf("%d <= %d is %d\n", num1, num2, num1 <= num2);
    printf("%d == %d is %d\n", num1, num2, num1 == num2);
    printf("%d != %d is %d\n", num1, num2, num1 != num2);

    return 0;
}
