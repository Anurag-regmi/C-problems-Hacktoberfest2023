#include <stdio.h>

// Global variable (class-like variable)
int classVariable = 10;

// Structure to simulate instance variables
struct Instance {
    int instanceVariable;
};

int main() {
    // Local variable
    int localVariable = 5;

    // Create an instance of the structure
    struct Instance obj;
    obj.instanceVariable = 15;

    printf("Local Variable: %d\n", localVariable);
    printf("Instance Variable: %d\n", obj.instanceVariable);
    printf("Class-like Variable: %d\n", classVariable);

    return 0;
}
