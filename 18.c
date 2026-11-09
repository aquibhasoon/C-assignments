#include <stdio.h>

int main()
{
    unsigned int num, result;
    int pos, n;
    printf("Enter number, position and number of bits: ");
    scanf("%u %d %d", &num, &pos, &n);
    if (pos < 0 || n <= 0 || pos >= 32 || n > 32 - pos)
    {
        printf("Invalid input\n");
        return 1;
    }
    result = (num >> pos) & ((1U << n) - 1);
    printf("Extracted bits = %u\n", result);
    return 0;
}