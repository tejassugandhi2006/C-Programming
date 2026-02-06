#include <stdio.h>
int main()
{
    int a[50], n, k, i, j, t;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("Enter k value: ");
    scanf("%d", &k);
    k = k % n;
    for(i = 0; i < k; i++)
    {
    t = a[n-1];
    for(j = n-1; j > 0; j--)
    a[j] = a[j-1];
    a[0] = t;
    }
    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
    printf("%d ", a[i]);
    return 0;
}