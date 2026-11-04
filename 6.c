#include <stdio.h>


void Gcd(int x, int y)
{
    int i,l,s,r,temp=0;
    if (x>y)
    {
        l=x;
        s=y;
    }
    else
    {
        l=y;
        s=x;
    }
    while(r!=0)
    {
        r=0;
        r=l%s;
        l=s;
        s=r;
    }
    
    printf("GCD value of the numbers %d and %d are %d",x,y,l);
}



int main()
{
    int num1,num2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    Gcd(num1,num2);
    return 0;
}