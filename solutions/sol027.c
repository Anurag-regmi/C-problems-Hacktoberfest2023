#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double area;

    printf("Choose a shape to calculate the area:\n");
    printf("1. Circle\n");
    printf("2. Triangle\n");
    printf("3. Rectangle\n");
    printf("4. Square\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Circle
            {
                double radius;
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                area = M_PI * radius * radius;
                printf("The area of the circle is %.2lf\n", area);
            }
            break;
        case 2: // Triangle
            {
                double base, height;
                printf("Enter the base length of the triangle: ");
                scanf("%lf", &base);
                printf("Enter the height of the triangle: ");
                scanf("%lf", &height);
                area = 0.5 * base * height;
                printf("The area of the triangle is %.2lf\n", area);
            }
            break;
        case 3: // Rectangle
            {
                double length, width;
                printf("Enter the length of the rectangle: ");
                scanf("%lf", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%lf", &width);
                area = length * width;
                printf("The area of the rectangle is %.2lf\n", area);
            }
            break;
        case 4: // Square
            {
                double side;
                printf("Enter the side length of the square: ");
                scanf("%lf", &side);
                area = side * side;
                printf("The area of the square is %.2lf\n", area);
            }
            break;
        default:
            printf("Invalid choice. Please choose 1, 2, 3, or 4.\n");
            break;
    }

    return 0;
}
