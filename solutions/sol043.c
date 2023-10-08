#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    printf("The first %d natural numbers are:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
