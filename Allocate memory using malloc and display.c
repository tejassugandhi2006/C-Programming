#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);    
    ptr = (int*) malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;    }
    for(i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }    
    printf("\nStored values are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}
