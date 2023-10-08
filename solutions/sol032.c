#include <stdio.h>

int main() {
    int choice;
    double temperature, convertedTemperature;

    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Fahrenheit to Kelvin\n");
    printf("3. Celsius to Fahrenheit\n");
    printf("4. Celsius to Kelvin\n");
    printf("5. Kelvin to Fahrenheit\n");
    printf("6. Kelvin to Celsius\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the temperature value: ");
    scanf("%lf", &temperature);

    printf("Conversion Results:\n");

    printf("| %-12s | %-12s |\n", "From", "To");
    printf("|------------|------------|\n");

    switch (choice) {
        case 1:
            convertedTemperature = (temperature - 32.0) * 5.0 / 9.0;
            printf("| %-12.2lf | %-12.2lf |\n", temperature, convertedTemperature);
            break;
        case 2:
            convertedTemperature = (temperature - 32.0) * 5.0 / 9.0 + 273.15;
            printf("| %-12.2lf | %-12.2lf |\n", temperature, convertedTemperature);
            break;
        case 3:
            convertedTemperature = (temperature * 9.0 / 5.0) + 32.0;
            printf("| %-12.2lf | %-12.2lf |\n", temperature, convertedTemperature);
            break;
        case 4:
            convertedTemperature = temperature + 273.15;
            printf("| %-12.2lf | %-12.2lf |\n", temperature, convertedTemperature);
            break;
        case 5:
            convertedTemperature = (temperature - 273.15) * 9.0 / 5.0 + 32.0;
            printf("| %-12.2lf | %-12.2lf |\n", temperature, convertedTemperature);
            break;
        case 6:
            convertedTemperature = temperature - 273.15;
            printf("| %-12.2lf | %-12.2lf |\n", temperature, convertedTemperature);
            break;
        default:
            printf("Invalid choice. Please choose 1 to 6.\n");
            break;
    }

    return 0;
}
