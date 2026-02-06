#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char ssd[64] = "This Pc";
    char *p = ssd;
    char *q = ssd + 10;

    printf("SSD base      : %p -> %c\n", (void*)ssd, *ssd);
    printf("p (start)     : %p -> %c\n", (void*)p, *p);

    p++;
    printf("p++           : %p -> %c\n", (void*)p, *p);

    printf("p[5]          : %c\n", p[5]);
    printf("*(p + 5)      : %c\n", *(p + 5));

    printf("q pointer     : %p -> %c\n", (void*)q, *q);
    printf("q - p         : %td\n", q - p);

    if (p < q) printf("p < q is true\n");

    p += 8;
    printf("p += 8        : %p -> %c\n", (void*)p, *p);

    char *end = ssd + strlen(ssd);
    printf("End of SSD    : %p\n", (void*)end);

    return 0;
}
