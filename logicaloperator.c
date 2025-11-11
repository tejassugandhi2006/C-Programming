#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 0;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    printf("(a > b) && (b > c) : %d\n", (a > b) && (b > c));
    printf("(a < b) && (b > c) : %d\n", (a < b) && (b > c));
    printf("(a > b) || (b > c) : %d\n", (a > b) || (b > c));
    printf("(a < b) || (b < c) : %d\n", (a < b) || (b < c));
    printf("!(a < b) : %d\n", !(a < b));
    printf("!(a > b) : %d\n", !(a > b));

    return 0;
}
