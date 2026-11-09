#include <stdio.h>

int main()
{
    int a[100], b[100], n, pos, i;
    char dir;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter rotation positions: ");
    scanf("%d", &pos);
    printf("Enter direction (L/R): ");
    scanf(" %c", &dir);
    pos = pos % n;
    for (i = 0; i < n; i++)
    {
        if (dir == 'L' || dir == 'l')
        b[i] = a[(i + pos) % n];
        else if (dir == 'R' || dir == 'r')
            b[i] = a[(i - pos + n) % n];

        else
        {
            printf("Invalid direction\n");
            return 1;
        }
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}