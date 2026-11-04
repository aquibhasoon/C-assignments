#include <stdio.h>

void Isperfect(int x)
{
    int i,temp=0;
    for (i=2;i<x;i++)
    {
        if (x%i==0)
        {
            temp=temp+(x/i);
        }
    }
    if (temp+1==x)
    {
        printf("The number entered is perfect");
    }
    else
    {
        printf("eneterd number is not perfect");
    }
    
}


int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    Isperfect(num);
    
    return 0;
    
}
