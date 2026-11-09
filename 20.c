#include <stdio.h>

int main()
{
    unsigned int num1, num2, bit1, bit2, mask, temp;
    int pos, n, i;
    printf("Enter first number: ");
    scanf("%u", &num1);
    printf("Enter second number: ");
    scanf("%u", &num2);
    printf("Enter starting bit position: ");
    scanf("%d", &pos);
    printf("Enter number of bits to swap: ");
    scanf("%d", &n);

    if (pos < 0 || n <= 0 || pos >= 32 || n > 32 - pos)
    {
        printf("Invalid position or number of bits!\n");
        return 1;
    }

    for (i = pos; i < pos + n; i++)
    {
        mask = 1U << i;

        bit1 = num1 & mask;
        bit2 = num2 & mask;

        if (bit1 != bit2)
        {
            num1 ^= mask;
            num2 ^= mask;
        }
    }

    printf("\nAfter swapping bits:\n");
    printf("First number  = %u\n", num1);
    printf("Second number = %u\n", num2);

    return 0;
}