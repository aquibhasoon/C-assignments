#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int max, min, smax, smin;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = min = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }
    smax = min;
    smin = max;
    for (i = 0; i < n; i++)
    {
        if (a[i] > smax && a[i] < max)
            smax = a[i];

        if (a[i] < smin && a[i] > min)
            smin = a[i];
    }

    if (smax == min || smin == max)
        printf("Second largest or smallest does not exist\n");
    else
        printf("Second largest = %d\nSecond smallest = %d\n", smax, smin);

    return 0;
}