#include <stdio.h>

int main() {
    int n = 7;
    double sum = 0.0;
    double factorial = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += i / factorial;
    }

    printf("The sum of the first %d terms of the series is: %lf\n", n, sum);

    return 0;
}
