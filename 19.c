#include <stdio.h>

int main()
{
    unsigned int num1, num2, mask, result;
    int pos, n;
    printf("Enter first number: ");
    scanf("%u", &num1);
    printf("Enter second number: ");
    scanf("%u", &num2);
    printf("Enter starting position: ");
    scanf("%d", &pos);
    printf("Enter number of bits: ");
    scanf("%d", &n);

    if (pos < 0 || n <= 0 || pos >= 32 || n > 32 - pos)
    {
        printf("Invalid input\n");
        return 1;
    }

    mask = (1U << n) - 1;
    num1 &= ~(mask << pos);
    result = num1 | ((num2 & mask) << pos);

    printf("Result = %u\n", result);
    return 0;
}