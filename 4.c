#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series of the number%d is",n);
    for (i = 0; i < n; i++)
    {
        printf(" %d\n ",a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}