#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};
struct Complex add(struct Complex a, struct Complex b)
{
    struct Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
void display(struct Complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imaginary);
}

int main()
{
    struct Complex c1, c2, sum;
    printf("Enter first complex number (real imaginary): ");
    scanf("%f %f", &c1.real, &c1.imaginary);
    printf("Enter second complex number (real imaginary): ");
    scanf("%f %f", &c2.real, &c2.imaginary);
    sum = add(c1, c2);
    printf("Sum = ");
    display(sum);

    return 0;
}