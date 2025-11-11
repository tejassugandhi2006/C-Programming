#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > 0)
        printf("First number is positive\n");
    if (b > 0)
        printf("Second number is positive\n");

    return 0;
}