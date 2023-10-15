#include <stdio.h>

int main() {
    int age;
    int hasLicense;

    // Prompt the user to enter their age and whether they have a driver's license
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a driver's license? (1 for Yes, 0 for No): ");
    scanf("%d", &hasLicense);

    // Logical operators example
    if (age >= 18 && hasLicense) {
        printf("You are eligible to drive.\n");
    } else if (age >= 18 && !hasLicense) {
        printf("You are old enough to drive but do not have a license.\n");
    } else if (age < 18 && hasLicense) {
        printf("You are too young to drive, but you have a license. Congratulations!\n");
    } else {
        printf("You are neither old enough to drive nor have a license.\n");
    }

    return 0;
}
