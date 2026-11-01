#include <stdio.h>
int main()
{
    int num,i,prime=1;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if (num<=1)
    {
        printf("Number is NOT PRIME");
    }
    else
    {
        for (i=2;i<num;i++)
        {
            if (num%i==0)
            {
                prime=0;    
            }
        }
    }
    if (prime)
    {
        printf("Number is PRIME"); 
    }
    else 
    {
        printf("Number is NOT PRIME");
    }
    return 0;
    
}