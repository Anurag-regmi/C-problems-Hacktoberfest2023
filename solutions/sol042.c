#include <stdio.h>

int main() {
    // Declare variables to store input values
    float principalAmount, rate, time, simpleInterest;

    // Input principal amount, rate, and time
    printf("Enter the Principal Amount: ");
    scanf("%f", &principalAmount);

    printf("Enter the Rate of Interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principalAmount * rate * time) / 100.0;

    // Display the result
    printf("Principal Amount: %.2f\n", principalAmount);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Time (in years): %.2f\n", time);
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}
