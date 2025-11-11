#include <stdio.h>

int main() {
    int a = 10, b;
    printf("Initial value of a = %d\n", a);

    b = a;
    printf("b = %d\n", b);

    a += 5;
    printf("a = %d\n", a);

    a -= 3;
    printf("a = %d\n", a);

    a *= 2;
    printf("a = %d\n", a);

    a /= 4;
    printf("a = %d\n", a);

    a %= 3;
    printf("a = %d\n", a);

    return 0;
}
