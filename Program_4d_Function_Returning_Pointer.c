
#include <stdio.h>
int* getElement(int arr[], int index) {
    return &arr[index];
}
int main() {
    int arr[5] = {4, 8, 12, 16, 20};
    int *p = getElement(arr, 2);
    printf("Element at index 2 = %d\n", *p);
    return 0;
}
