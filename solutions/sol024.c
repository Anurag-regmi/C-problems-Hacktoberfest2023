#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Read coefficients 'a,' 'b,' and 'c' from the user
    printf("Enter the coefficient 'a': ");
    scanf("%lf", &a);
    printf("Enter the coefficient 'b': ");
    scanf("%lf", &b);
    printf("Enter the coefficient 'c': ");
    scanf("%lf", &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the discriminant for real roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
