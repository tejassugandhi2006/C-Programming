#include <stdio.h>

int main() {
    int num1, num2;
    int sum, sub, mult, mod;
    float div; // Use float for division to handle decimal results

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2; // Type-cast one operand to float for float division
    mod = num1 % num2;

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", sub);
    printf("Product: %d\n", mult);
    printf("Quotient: %.2f\n", div); // Print division result with 2 decimal places
    printf("Modulus: %d\n", mod);

    return 0;
}