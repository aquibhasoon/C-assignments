#include <stdio.h>

int main()
{
    int a[100], b[100], n, i, j = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
            b[j++] = a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] >= 0)
            b[j++] = a[i];
    }

    printf("Rearranged array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}