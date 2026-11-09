#include <stdio.h>

int main()
{
    unsigned int num;
    int pos, n, i;
    printf("Enter number, position and number of bits: ");
    scanf("%u %d %d", &num, &pos, &n);
    for (i = pos; i < pos + n; i++)
    {
        num ^= (1U << i);
    }
    printf("Result = %u\n", num);
    return 0;
}