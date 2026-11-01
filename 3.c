#include <stdio.h>
int main()
{
    int num,i,Factorial=1;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        Factorial=Factorial*i;
    }
    printf("Factorial of the number %d is %d",num,Factorial);
    return 0;
    
}