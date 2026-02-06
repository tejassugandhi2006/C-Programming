#include<stdio.h>
int main() {
    int a, b, max;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    // Using conditional operator to find the maximum
    max = (a > b) ? a : b;
    
    printf("The maximum value is: %d\n", max);
    return 0;
}