#include <stdio.h>

int main() {
    int a = 5, b;

    printf("Initial value of a = %d\n", a);

    b = ++a;
    printf("After pre-increment (++a): a = %d, b = %d\n", a, b);

    b = a++;
    printf("After post-increment (a++): a = %d, b = %d\n", a, b);

    b = --a;
    printf("After pre-decrement (--a): a = %d, b = %d\n", a, b);

    b = a--;
    printf("After post-decrement (a--): a = %d, b = %d\n", a, b);

    return 0;
}
